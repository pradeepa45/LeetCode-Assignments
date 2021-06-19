class Solution {
public:
    int calPoints(vector<string>& ops) {
        int s = ops.size();
        vector<int> record;
        for (int i=0;i<s;i++){
            if(ops[i]=="C"){
                cout <<"popping" << record.back() << ",";
                record.pop_back() ;
                // cout << "back is now" << record.back() << " ";
            }
            else if(ops[i]=="D"){
                int t = record.back();
                record.push_back(2*t);
                cout << record.back() << " ";
​
            }
            else if(ops[i]=="+"){
                int rs = record.size();
                int sum = record[rs-2] + record[rs-1];
                record.push_back(sum);
                cout << record.back() << " ";
​
            }
            else if(stoi(ops[i])){
                record.push_back(stoi(ops[i]));
                cout << record.back() << " ";
            }
        }
        int answer = accumulate(record.begin(),record.end(),0);
        cout << answer << endl;
        return answer;
    }
};
