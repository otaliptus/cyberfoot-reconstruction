// Address: 0044dbe4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044dbe4(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_8;
  
  puStack_38 = (undefined1 *)0x44dbfb;
  local_8 = param_1;
  FUN_0044dba8(param_1);
  puStack_38 = (undefined1 *)0x44dc00;
  cVar2 = FUN_0046cde4();
  if (cVar2 != '\0') {
    puStack_38 = (undefined1 *)0x44dc10;
    (**(code **)(*local_8 + 0x20))();
    puStack_3c = &LAB_0044dcbf;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_40;
    puStack_38 = &stack0xfffffffc;
    iVar3 = FUN_0041edb0(local_8);
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      do {
        FUN_0044dba8(local_8);
        uVar4 = FUN_0046cae0();
        FUN_00432d90(uVar4,iVar3);
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    iVar3 = FUN_0041edb0(local_8);
    if (-1 < iVar3 + -1) {
      iVar6 = 0;
      do {
        local_28 = 3;
        local_24 = 0;
        iVar5 = FUN_0044db94(local_8,iVar6);
        local_20 = *(undefined4 *)(iVar5 + 0x24);
        FUN_0044dba8(local_8);
        uVar4 = FUN_0046cae0();
        FUN_00432d80(uVar4,iVar6,&local_28);
        iVar5 = FUN_0044db94(local_8,iVar6);
        *(int *)(iVar5 + 0x28) = iVar6;
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_0044dba8(local_8);
    FUN_004521fc();
    puVar1 = puStack_38;
    *in_FS_OFFSET = uStack_40;
    puStack_38 = (undefined1 *)0x44dcc6;
    puStack_3c = (undefined1 *)0x44dcbe;
    (**(code **)(*local_8 + 0x24))(local_8,*local_8,puVar1);
    return;
  }
  return;
}

