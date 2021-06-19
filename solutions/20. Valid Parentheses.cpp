                    else{
                        break;
                        cout << "else 2" << " ";
                    }
                }
                else if(s[i]==']' && !stck.empty()){
                    if(stck.top() == '[' ){
                        stck.pop();
                        cout << "pop [" << " ";
                    }
                    else{
                        break;
                        cout << "else 3" << " ";
                    }
                }
                else{
                    ans = false;
                    cout << "endingAndEmpty" << " ";
                    stck.push(s[i]);
                    break;
                }
            }
            if(stck.empty()){
                ans= true;
                
            }
        }
        return ans;
        cout << "end" << endl;
    }
};
