import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val s = next().toCharArray()
    s.forEachIndexed { i, c ->
      if(i>0 && s[i-1] == s[i]) {
          s[i-1] = c.uppercaseChar()
          s[i] = c.uppercaseChar()
      }
    }
    s.forEach {
        print(it)
    }
}