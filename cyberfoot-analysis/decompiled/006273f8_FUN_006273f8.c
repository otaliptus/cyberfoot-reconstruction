// Address: 006273f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006273f8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_10;
  
  iVar4 = 5;
  puVar5 = &DAT_0066a7d0;
  local_10 = (undefined4 *)PTR_DAT_0066b608;
  do {
    iVar2 = 4;
    puVar1 = puVar5;
    puVar3 = local_10;
    do {
      *puVar3 = *puVar1;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_10 = local_10 + 4;
    puVar5 = puVar5 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

