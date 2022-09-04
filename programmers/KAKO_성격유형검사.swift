//
//성격 유형 검사하기
//

import Foundation

func solution(_ survey:[String], _ choices:[Int]) -> String {
  var table : [String:Int] = [
      "R":0,"T":0,"C":0,"F":0,"J":0,"M":0,"A":0,"N":0
  ]
    for (idx,surveyItem) in survey.enumerated() {
        if idx >= choices.count { continue }
        let choice =   choices[idx] ?? 4
        if  choice < 4 {
            let add =  4 - choice
            let answer = String(surveyItem.first!)
            let newScore = table[answer]! + add
            table[answer] = newScore
        } else if  choice > 4{
            let add = choice - 4
            let answer = String(surveyItem.last!)
            let newScore = table[answer]! + add
            table[answer] = newScore
        }
    }
    var ret = ""
    if (table["R"] ?? 0) >= (table["T"] ?? 0 ) { ret += "R"}
    else { ret += "T" }
    
    if (table["C"] ?? 0) >= ( table["F"] ?? 0) { ret += "C" }
    else {ret += "F"}
        
    if( table["J"] ?? 0) >= (table["M"] ?? 0) {ret += "J"}
    else {ret += "M"}
        
    if (table["A"] ?? 0) >= (table["N"] ?? 0 ){ret += "A"}
    else {ret += "N"}

    return ret
}
