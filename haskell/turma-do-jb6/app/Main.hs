module Main where

import Prelude
import System.IO

data Lance = Pedra | Papel | Tesoura
  deriving (Eq)

type Jogo  = (Lance, Lance, Lance)

foo :: String -> Lance
foo s
    | s == "pedra" = Pedra
    | s == "papel" = Papel
    | otherwise    = Tesoura

f1 = "Os atributos dos monstros vao ser inteligencia, sabedoria...\n"
f2 = "Iron Maiden\'s gonna get you, no matter how far!\n"
f3 = "Urano perdeu algo muito precioso...\n"
f4 = "Putz vei, o Leo ta demorando muito pra jogar...\n"

jogo :: Jogo -> String
jogo (Papel, Pedra, Pedra) = f1
jogo (Pedra, Papel, Pedra) = f2
jogo (Pedra, Pedra, Papel) = f3
jogo (Tesoura, Papel, Papel) = f1
jogo (Papel, Tesoura, Papel) = f2
jogo (Papel, Papel, Tesoura) = f3
jogo (Pedra, Tesoura, Tesoura) = f1
jogo (Tesoura, Pedra, Tesoura) = f2
jogo (Tesoura, Tesoura, Pedra) = f3
jogo (_, _, _) = f4

myLoop :: [String] -> [String]
myLoop p2 = [f (words x) | x <- p2]
    where
        f p2 = jogo ((foo (p2 !! 0)),(foo (p2 !! 1)),(foo (p2 !! 2)))

main :: IO ()
main =  do
        done <- isEOF
        if done then putStrLn ""
        else do
            input <- getContents
            let p2 = lines input
            mapM_ putStr $ (myLoop p2)
