import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val bw = BufferedWriter(OutputStreamWriter(System.out))

    val s = br.readLine()
    val t = br.readLine()
    val alp = Array(26) { 0 }
    val alp2 = Array(26) { 0 }
    s.forEach {
        alp[it - 'a']++
    }
    t.forEach {
        alp2[it - 'a']++
    }
    val r = Array(26) { 0 }
    for(i in 0 until 26) {
        r[i] = if (alp[i] > alp2[i]) alp[i] else alp2[i]
    }
    r.forEachIndexed { idx, it ->
        if(it>0) {
            for(i in 0 until it) {
                bw.write(('a'.code + idx).toChar().toString())
            }
        }
    }

    bw.flush()
    bw.close()
}