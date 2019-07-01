#include<set>
#include<stdio.h>
using namespace std;
int main()
{
    set<int,greater<int>> st;
    st.insert(2);
    st.insert(5);
    st.insert(8);
    st.insert(9);
    st.insert(6);
    st.insert(6);
    st.insert(6);
    for(set<int>::iterator it=st.begin();it!=st.end();it++){
        printf("%d ",*it);
    }
    return 0;
}
