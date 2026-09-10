// Address: 00498bdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00498bdc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  FUN_004988fc(param_1,0xda);
  FUN_0049891c(param_1,*(int *)(param_1 + 0xf0) * 2 + 6);
  FUN_004988cc(param_1,*(undefined4 *)(param_1 + 0xf0));
  piVar5 = (int *)(param_1 + 0xf4);
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0xf0); iVar4 = iVar4 + 1) {
    puVar1 = (undefined4 *)*piVar5;
    FUN_004988cc(param_1,*puVar1);
    iVar2 = puVar1[5];
    iVar3 = puVar1[6];
    if (*(int *)(param_1 + 0xe0) != 0) {
      if (*(int *)(param_1 + 0x138) == 0) {
        iVar3 = 0;
        if ((*(int *)(param_1 + 0x140) != 0) && (*(int *)(param_1 + 0xb0) == 0)) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0;
      }
    }
    FUN_004988cc(param_1,iVar3 + iVar2 * 0x10);
    piVar5 = piVar5 + 1;
  }
  FUN_004988cc(param_1,*(undefined4 *)(param_1 + 0x138));
  FUN_004988cc(param_1,*(undefined4 *)(param_1 + 0x13c));
  FUN_004988cc(param_1,*(int *)(param_1 + 0x140) * 0x10 + *(int *)(param_1 + 0x144));
  return;
}

