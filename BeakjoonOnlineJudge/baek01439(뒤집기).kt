import java.util.*

fun main(arg: Array<String>) = with(Scanner(System.`in`)) {
    val s = nextLine()
    var zero = if(s[0]=='0') 1 else 0
    var one = if(s[0]=='0') 0 else 1
    var cur = s[0]

    s.forEach {
        if(cur != it){
            if(it == '0') zero++
            else one++
            cur = it
        }
    }
    if(one>zero) print(zero)
    else print(one)
}