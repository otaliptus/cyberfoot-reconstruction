// Address: 00404998
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 * FUN_00404998(int param_1)

{
  undefined4 *puVar1;
  
  if (0 < param_1) {
    puVar1 = (undefined4 *)FUN_004027fc();
    *(undefined2 *)(((param_1 + 10U & 0xfffffffe) - 2) + (int)puVar1) = 0;
    puVar1[1] = param_1;
    *puVar1 = 1;
    return puVar1 + 2;
  }
  return (undefined4 *)0x0;
}

