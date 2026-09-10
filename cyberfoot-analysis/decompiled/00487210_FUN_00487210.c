// Address: 00487210
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00487210(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0xdc))(piVar1,param_2);
    if (cVar2 != '\0') {
      FUN_00488198(param_1);
    }
  }
  return 0;
}

