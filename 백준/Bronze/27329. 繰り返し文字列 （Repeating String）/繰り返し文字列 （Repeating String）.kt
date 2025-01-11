fun main() {
    val n = readLine()!!.toInt()
    val s = readLine()!!

    val firstHalf = s.substring(0, n / 2)
    val secondHalf = s.substring(n / 2)

    if (firstHalf == secondHalf) {
        println("Yes")
    } else {
        println("No")
    }
}