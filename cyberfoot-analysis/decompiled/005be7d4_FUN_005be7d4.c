// Address: 005be7d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005be7d4(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = param_1[0x82];
  iVar1 = 0;
  do {
    if (iVar1 == *(int *)(iVar3 + 0x20)) {
      uVar2 = 0;
      uVar5 = 0;
LAB_005be827:
      *param_3 = uVar2;
      param_3[1] = uVar5;
      return;
    }
    if (param_2 == *(int *)(*(int *)(iVar3 + 0x24) + iVar1 * 4)) {
      if ((*(uint *)(iVar3 + 0x30) < 0x191) || (uVar4 = *(uint *)(iVar3 + 0x50), uVar4 == 0)) {
        FUN_00403a10(*param_1);
        iVar3 = FUN_00403a4c();
        uVar4 = iVar3 + 7U & 0xfffffff8;
      }
      uVar5 = *(undefined4 *)((int)param_1 + iVar1 * 8 + uVar4 + 4);
      uVar2 = *(undefined4 *)((int)param_1 + iVar1 * 8 + uVar4);
      goto LAB_005be827;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

