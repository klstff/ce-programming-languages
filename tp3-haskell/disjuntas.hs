module Disjuntas where
    elemento :: Int -> [Int] -> Bool
    elemento x [] = False
    elemento x (a:lista) = if (x /= a) then elemento x lista else True

    disjuntas x [] = True
    disjuntas [] y = True
    disjuntas x (y:lista)
        | elemento y x = False
        | otherwise = disjuntas x lista