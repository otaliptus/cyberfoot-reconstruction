// Address: 00424e1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00424e1c(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  puStack_24 = (undefined1 *)0x424e35;
  FUN_00403cc4(*param_2);
  puStack_24 = (undefined1 *)0x424e3a;
  iVar4 = FUN_00419c28();
  iVar4 = (int)*(short *)(iVar4 + 8);
  if (iVar4 < 1) {
    puStack_24 = (undefined1 *)0x424edb;
    (**(code **)(*param_2 + 4))(param_2,param_1);
    return;
  }
  puStack_24 = (undefined1 *)0x424e56;
  iVar5 = FUN_004027fc(iVar4 << 2);
  puStack_28 = &LAB_00424ec9;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  uVar6 = FUN_00403cc4(*param_2);
  FUN_00419e64(uVar6,iVar5);
  if (-1 < iVar4 + -1) {
    iVar8 = 0;
    iVar7 = iVar4;
    do {
      iVar1 = *(int *)(iVar5 + iVar8 * 4);
      if (iVar1 == 0) break;
      cVar3 = FUN_00419eb8(param_2,iVar1);
      if (cVar3 != '\0') {
        FUN_00425eb0(param_1,param_2,iVar1);
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = (undefined1 *)0x424ed0;
  puStack_28 = (undefined1 *)0x424ec8;
  FUN_0040281c(iVar5,iVar4 << 2,puVar2);
  return;
}

