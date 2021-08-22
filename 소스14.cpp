//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int mmax = 0,minst = 3600*99+60*59+59;
//typedef struct{
//    int s,e;
//}se;
//bool cmp(se a, se b){
//    if(a.e < b.e) return true;
//    else if(a.e == b.e){
//        if(a.s < b.s)
//            return true;
//    }
//    return false;
//}
//int totime(string s){
//    int res=0;
//    res += stoi(s.substr(0,2))*60*60;
//    res += stoi(s.substr(3,2))*60;
//    res += stoi(s.substr(6,2));
//    return res;
//}
//string solution(string play_time, string adv_time, vector<string> logs) {
//    string answer = "";
//    vector<se> tb;
//    int ptime = totime(play_time);
//    int atime = totime(adv_time);
//    if(ptime == atime) return "00:00:00";
//    for(int i=0;i<logs.size();i++)
//       tb.push_back({totime(logs[i].substr(0,8)),totime(logs[i].substr(9,8))});
//    sort(tb.begin(),tb.end(),cmp);
//    
//    for(int i=0;i<tb.size();i++){
//        int astart = tb[i].e-atime, aend = tb[i].e;
//        if(astart <0) astart = 0;
//        int play=0;
//
//        for(int j=i;j<tb.size();j++){
//            if (tb[j].e < astart) continue;
//            if(aend < tb[j].s) break;
//            else if(tb[j].s <= astart && tb[j].e <= aend)
//                play+=(tb[j].e - astart);
//            else if(tb[j].s>= astart && tb[j].e >= aend)
//                play+=(aend-tb[j].s);
//            else if(tb[j].s <=astart && tb[j].e >= aend)
//                play+=atime;
//        }
//        if(play > mmax) {
//            mmax = play;
//            minst = astart;
//        }
//    }
//    
//    int hour,min,sec;
//    hour = minst/3600; minst%=3600;
//    min = minst/60;
//    sec = minst%60;
//    if(hour < 10) answer += "0"+to_string(hour)+":";
//    else answer += to_string(hour)+":";
//    if(min < 10) answer += "0"+to_string(min)+":";
//    else answer += to_string(min)+":";
//    if(sec < 10) answer += "0"+to_string(sec);
//    else answer += to_string(sec);
//    return answer;
//}