import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val vowelCount = 21
    val finalCount = 28
    val hangulBase = 0xAC00
    val index = n - 1
    val initialIndex = index / (vowelCount * finalCount)
    val vowelIndex = (index % (vowelCount * finalCount)) / finalCount
    val finalIndex = index % finalCount

    val unicodeValue = hangulBase + (initialIndex * vowelCount * finalCount) + (vowelIndex * finalCount) + finalIndex
    val hangulChar = unicodeValue.toChar()

    print(hangulChar)
}