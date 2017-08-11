    #include<iostream>
    #include<map>
    #include<string>

    using namespace std;

    int main(){
    map<string,int> stu;
    map<string,int> :: iterator it;
    int T,i1;string name;int mark;
    cin>>T;

    while(T--)
    {
        cin>>i1;
        cin>>name;

        switch(i1){
        case 1:
                cin>>mark;
                if(stu.find(name)==stu.end())
                    stu.insert({name,mark});
                else
                    stu[name]+=mark;
                break;

        case 2:
                stu.erase(name);
                break;

        case 3:
                it = stu.fiwnd(name);
                if(it==stu.end()) cout<<"0";
                else
                cout<<it->second;
                break;

        }

    }
    return 0;
    }
