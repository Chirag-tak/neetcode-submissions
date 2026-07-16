class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     map<int,int> mp;
    //     int value=-1;
    //     for(auto x: nums){
    //         mp[x]++;
    //     }
    //     for(auto x: mp){
    //         if(x.second==1){
    //             value=x.first;
    //         }
    //     }
    // return value;
        int xorr=0;
        for(int i=0;i<nums.size();i++){
            xorr=xorr^nums[i];
        }
        return xorr;
    }

};
const static auto io_speed_up = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    FILE* fptr = fopen("user.out", "w");
    int x, out = 0;
    while (!cin.eof()) {
        if (cin.peek() == '[')
            cin.ignore();
        else
            break;
        out = 0;
        while (cin.peek() != ']') {
            cin >> x;
            if (cin.peek() == ',')
                cin.ignore();
            out ^= x;
        }
        fprintf(fptr, "%d\n", out);
        cin.ignore(1024, '\n');
    }
    fclose(fptr);
    exit(0);
    return 0;
}();