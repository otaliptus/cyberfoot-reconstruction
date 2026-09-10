// Address: 0049c958
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049c958(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int local_24;
  int local_20 [4];
  
  iVar1 = *(int *)(param_1 + 0x168);
  FUN_0049c254(iVar1);
  bVar6 = *(int *)(param_1 + 0x138) != 0;
  FUN_0048aaf4();
  local_24 = 0;
  piVar4 = (int *)(param_1 + 0xf4);
  do {
    if (*(int *)(param_1 + 0xf0) <= local_24) {
      return;
    }
    if (bVar6) {
      iVar3 = *(int *)(*piVar4 + 0x18);
LAB_0049c9bd:
      if (local_20[iVar3] == 0) {
        if (bVar6) {
          piVar5 = (int *)(param_1 + 100 + iVar3 * 4);
        }
        else {
          piVar5 = (int *)(param_1 + 0x54 + iVar3 * 4);
        }
        if (*piVar5 == 0) {
          iVar2 = FUN_004977f8(param_1);
          *piVar5 = iVar2;
        }
        FUN_0049d994(param_1,*piVar5,*(undefined4 *)(iVar1 + 0x5c + iVar3 * 4));
        local_20[iVar3] = 1;
      }
    }
    else if (*(int *)(param_1 + 0x140) == 0) {
      iVar3 = *(int *)(*piVar4 + 0x14);
      goto LAB_0049c9bd;
    }
    local_24 = local_24 + 1;
    piVar4 = piVar4 + 1;
  } while( true );
}

