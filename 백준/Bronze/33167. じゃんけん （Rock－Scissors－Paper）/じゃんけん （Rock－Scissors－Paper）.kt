fun main() {
    val n = readLine()!!.toInt()
    val s = readLine()!!
    val t = readLine()!!
    var aoiWins = 0
    var bitaroWins = 0

    for (i in 0 until n) {
        val aoi = s[i]
        val bitaro = t[i]

        when {
            aoi == 'R' && bitaro == 'P' -> bitaroWins++
            aoi == 'S' && bitaro == 'R' -> bitaroWins++
            aoi == 'S' && bitaro == 'P' -> aoiWins++
            aoi == 'R' && bitaro == 'R' -> {}
            aoi == 'S' && bitaro == 'S' -> {}
            aoi == 'R' && bitaro == 'S' -> aoiWins++
        }
    }

    println("$aoiWins $bitaroWins")
}