// Address: 0049783c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049783c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)param_1[6];
  iVar2 = FUN_0048ab3c();
  if (iVar2 != 0x1000) {
    *(undefined4 *)(*param_1 + 0x14) = 0x25;
    (**(code **)*param_1)();
  }
  *puVar1 = puVar1[6];
  puVar1[1] = 0x1000;
  return 1;
}

