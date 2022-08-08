import java.util.*

fun main(arg: Array<String>) = with(Scanner(System.`in`)) {
    while(hasNextLine()) {
        val str = nextLine()
        if(str.isEmpty()) break
        val low = str.count { it.isLowerCase() }
        val upp = str.count { it.isUpperCase() }
        val num = str.count { it.isDigit() }
        val bnk = str.count { it == ' ' }
        println("$low $upp $num $bnk")
    }
}