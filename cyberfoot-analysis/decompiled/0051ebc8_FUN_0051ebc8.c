// Address: 0051ebc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051ebc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  uint local_18;
  int local_10;
  
  puStack_24 = (undefined1 *)0x51ebe0;
  (**(code **)(**(int **)(*(int *)(param_4 + -4) + 0x20) + 0x18))();
  iVar1 = *(int *)(*(int *)(param_4 + -4) + 0x20);
  iVar2 = *(int *)(iVar1 + 8);
  if ((iVar2 != 0) && (iVar2 != 0x100)) {
    puStack_24 = (undefined1 *)0x51ec0e;
    uVar3 = FUN_0051a454(iVar1,0,param_4);
    puStack_24 = (undefined1 *)0x3;
    puStack_28 = (undefined1 *)0x51ec25;
    puVar4 = (undefined4 *)FUN_00516d7c(PTR_PTR_00516c7c,1,param_1);
    puStack_28 = &LAB_0051ecbf;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    local_18 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),4);
    local_18 = local_18 & 0xffff;
    if (-1 < (int)(local_18 - 1)) {
      local_10 = 0;
      do {
        pcVar5 = (char *)(**(code **)*puVar4)(puVar4,local_10);
        puVar6 = (undefined1 *)FUN_0051e340(*(undefined4 *)(param_4 + -4),local_10);
        uVar7 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),3);
        uVar7 = uVar7 & 0xffff;
        if (-1 < (int)(uVar7 - 1)) {
          do {
            if (*pcVar5 != '\0') {
              *puVar6 = uVar3;
            }
            pcVar5 = pcVar5 + 1;
            puVar6 = puVar6 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        local_10 = local_10 + 1;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
    }
    puVar6 = puStack_24;
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = &DAT_0051ecc6;
    puStack_28 = (undefined1 *)0x51ecbe;
    FUN_00403a84(puVar4,uStack_2c,puVar6);
    return;
  }
  return;
}

