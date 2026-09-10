// Address: 004250b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004250b0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_4 + -0x14) == *(int *)(param_1 + 4))) && (param_2 != 0))
     && ((*(int *)(param_4 + -0x18) == *(int *)(param_2 + 4) &&
         (cVar1 = FUN_004096cc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8)),
         cVar1 != '\0')))) {
    return 1;
  }
  return 0;
}

