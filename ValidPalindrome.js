/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    var news = s.replace(/[^a-zA-Z0-9]/g, "");
    var newss = news.toLowerCase();
    console.log(newss);
    var ans = true;
    let n = newss.length;
    for( let i=0;i<n/2;){
        if(newss[i]==newss[n-i-1]){
            i++;
        }
        else{
            ans = false;
            console.log(i);
            break;
        }
    }
    return ans;
};
