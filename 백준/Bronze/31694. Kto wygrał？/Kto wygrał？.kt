import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val arr = Array(11) { 0 }
    val brr = Array(11) {0}
    var asu = 0
    var bsu = 0
    for(i in 0 until 18) {
        val t = nextInt()
        arr[t]++
        asu+=t
    }

    for(i in 0 until 18) {
        val t = nextInt()
        brr[t]++
        bsu+=t
    }
    if(asu > bsu) {
        print("Algosia")
        return@with
    } else if(bsu > asu){
        print("Bajtek")
        return@with
    }

    var s = "remis"
    for(i in 10 downTo 1) {
        if(arr[i] != brr[i]) {
            s = if(arr[i] > brr [i]) "Algosia"
            else "Bajtek"
            break
        }
    }
    print(s)
}