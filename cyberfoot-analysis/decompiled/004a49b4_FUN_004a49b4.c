// Address: 004a49b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a49b4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = param_2;
  do {
    uVar1 = FUN_004a4998(param_2,*puVar2);
    *param_1 = uVar1;
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 0x20);
  return;
}

