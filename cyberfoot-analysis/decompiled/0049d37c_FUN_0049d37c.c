// Address: 0049d37c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049d37c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1[8] + 0x18);
  iVar2 = (*(code *)puVar1[3])();
  if (iVar2 == 0) {
    return 0;
  }
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  return 1;
}

