import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextLong()
    if(n >= -32768 && n <= 32767) {
        print("short")
    } else if(n >= -2147483648 && n <= 2147483647){
        print("int")
    } else if(n >= "-9223372036854775808".toLong() && n <= "9223372036854775807".toLong()){
        print("long long")
    }
}