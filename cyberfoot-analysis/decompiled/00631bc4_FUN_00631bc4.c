// Address: 00631bc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00631bc4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int local_40;
  int local_3c [11];
  
  local_40 = 0;
  iVar4 = 0xb;
  piVar3 = local_3c;
  do {
    *piVar3 = -1;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 0xb;
  puVar2 = &DAT_006d4bb4;
  piVar3 = local_3c;
  do {
    *piVar3 = puVar2[param_1 * 0xb + -1];
    piVar3 = piVar3 + 1;
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 0xb;
  puVar2 = &DAT_006d4bb4;
  do {
    puVar2[param_1 * 0xb + -1] = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 0xb;
  piVar3 = local_3c;
  do {
    iVar1 = *piVar3;
    if ((param_2 != iVar1) && (-1 < iVar1)) {
      local_40 = local_40 + 1;
      (&DAT_006d4bac)[param_1 * 0xb + local_40] = iVar1;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

