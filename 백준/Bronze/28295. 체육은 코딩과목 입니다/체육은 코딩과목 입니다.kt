import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var s = 0
    for(i in 0 until 10) {
        val a = nextInt()
        if(a == 1) {
            s+=1
        } else if(a == 2) {
            s+=2
        } else {
            s-=1
        }
        if(s<0){
            s += 4
        }
        s%=4
    }
    when(s) {
        0->print("N")
        1->print("E")
        2->print("S")
        3->print("W")
    }
}