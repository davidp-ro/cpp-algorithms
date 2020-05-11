/**
 * @author David Pescariu - (github.com/davidp-ro)
 * @brief Binary search
 */

/**
 * @brief Binary search in a C-style array, easily adaptable. 
 * 
 *  If you need to insert the element in the vector, and keep it sorted, 
 * insert into v[left] or v[right].
 * 
 * @param v Array(sorted) to search into.
 * @param searched_element The searched element.
 * @param left starting possition
 * @param right end possition 
 * 
 * @return true If element was found
 * @return false If element wasn't found.
 */
bool search(int v[], int searched_element, int& left, int& right) {
    while(left <= right) {
        int mid = (left + right) / 2;

        if(v[mid] == searched_element) {
            return true;  // Found
        }

        if(searched_element < v[mid]) {
            right = mid - 1;
        }
        if(searched_element > v[mid]) {
            left = mid + 1;
        }
    }

    return false;  // Not found.
}