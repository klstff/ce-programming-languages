module Shift where
    finalLista :: [Int] -> [Int]
    finalLista (x:lista) = lista ++ [x]

    shift :: Int -> [Int] -> [Int]
    shift 0 y = y
    shift x y = if x > 0 then shift (x - 1) (finalLista y) else y