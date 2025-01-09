fun main() {
    val (n, r) = readLine()!!.split(" ").map { it.toInt() }
    var fixedRaiseCount = 0
    var doubleSalaryCount = 0

    repeat(n) {
        val salary = readLine()!!.toInt()
        val fixedRaise = r
        val doubleSalary = salary

        when {
            fixedRaise > doubleSalary -> fixedRaiseCount++
            doubleSalary > fixedRaise -> doubleSalaryCount++
        }
    }

    println(
        when {
            fixedRaiseCount > doubleSalaryCount -> 1
            doubleSalaryCount > fixedRaiseCount -> 2
            else -> 0
        }
    )
}