// Address: 0041ee94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041ee94(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  puStack_24 = (undefined1 *)0x41eeb1;
  FUN_00404928(param_2,*(undefined4 *)(param_1 + 0x14));
  puStack_24 = (undefined1 *)0x41eebd;
  puVar3 = (undefined4 *)FUN_00403c80(param_1);
  if ((*param_2 == 0) && (puVar3 != (undefined4 *)0x0)) {
    puStack_24 = (undefined1 *)0x41eee0;
    iVar4 = FUN_00403cc4(*puVar3);
    if (iVar4 != 0) {
      puStack_24 = (undefined1 *)0x41eef2;
      FUN_00403cc4(*puVar3);
      puStack_24 = (undefined1 *)0x41eef7;
      iVar4 = FUN_00419c28();
      if ((iVar4 != 0) && (*(short *)(iVar4 + 8) != 0)) {
        puStack_24 = (undefined1 *)0x41ef18;
        iVar5 = FUN_004027fc((int)*(short *)(iVar4 + 8) << 2);
        puStack_28 = &LAB_0041ef91;
        uStack_2c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_2c;
        puStack_24 = &stack0xfffffffc;
        uVar6 = FUN_00403cc4(*puVar3);
        FUN_00419e64(uVar6,iVar5);
        iVar4 = (int)*(short *)(iVar4 + 8);
        if (-1 < iVar4 + -1) {
          iVar8 = 0;
          do {
            puVar1 = *(undefined4 **)(iVar5 + iVar8 * 4);
            if (**(char **)*puVar1 == '\a') {
              iVar7 = FUN_00419ee8(puVar3,*(undefined4 *)(iVar5 + iVar8 * 4));
              if (iVar7 == param_1) {
                FUN_00404b48(param_1 + 0x14,(int)puVar1 + 0x1a);
              }
            }
            iVar8 = iVar8 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        puVar2 = puStack_24;
        *in_FS_OFFSET = uStack_2c;
        puStack_24 = &DAT_0041ef98;
        puStack_28 = (undefined1 *)0x41ef90;
        FUN_0040281c(iVar5,uStack_2c,puVar2);
        return;
      }
    }
  }
  return;
}

