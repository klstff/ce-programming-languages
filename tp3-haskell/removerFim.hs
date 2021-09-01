module RemoverFim where
    removerFim :: Int -> [Integer] -> [Integer]
    removerFim a [] = []
    removerFim 0 lista = lista
    removerFim n (x:lista) = if length(lista) > n then [x] ++ (removerFim n lista) else if n > length(lista) then [] else [x]