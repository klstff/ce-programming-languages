module SomaImpares where
    somaImpares :: [Int] -> Int
    somaImpares [] = 0
    somaImpares (a:x) = if mod a 2 /= 0 then a + somaImpares(x) else somaImpares(x)