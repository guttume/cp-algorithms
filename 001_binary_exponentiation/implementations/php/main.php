<?php

function binExp(int $a, int $b): int {
    $result = 1;
    while($b > 0) {
        if ($b % 2 != 0) $result *= $a;
        $a *= $a;
        $b = floor($b/2);
    }
    return $result;
}

echo binExp(3, 9);