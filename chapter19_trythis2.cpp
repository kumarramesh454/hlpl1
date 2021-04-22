/* Try This
 Add try-blocks to this last example to ensure that all resources are properly released in
 all cases where an exception might be thrown*/


void suspicious(vector<int>& v, int s)
{
    try {
        int* p = new int[s];
    }
    catch (...) {
        delete[] p;
        throw;
    }

    vector<int> v1;
    // ...

    try {
        int* q = new int[s];
    }
    catch (...) {
        delete[] q;
        delete[] p;
        throw;
    }

    vector<double> v2;
    // ...
    delete[] p;
    delete[] q;
}
