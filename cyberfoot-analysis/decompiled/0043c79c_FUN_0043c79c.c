// Address: 0043c79c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043c79c(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  HANDLE pvVar4;
  HANDLE pvVar5;
  short sVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x43c7b0;
  (**(code **)(*param_1 + 0x18))();
  puStack_1c = &LAB_0043c83e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  uVar3 = EnumClipboardFormats(0);
  sVar6 = (short)uVar3;
  while( true ) {
    if (sVar6 == 0) {
      FUN_0040e42c(PTR_DAT_00408738,1,PTR_PTR_0066aec0);
      FUN_00404250();
      puVar1 = puStack_18;
      *in_FS_OFFSET = uStack_20;
      puStack_18 = (undefined1 *)0x43c845;
      puStack_1c = (undefined1 *)0x43c83d;
      (**(code **)(*param_1 + 0x14))(param_1,*param_1,puVar1);
      return;
    }
    cVar2 = FUN_0042d8e4(PTR_PTR_0042902c,uVar3);
    if (cVar2 != '\0') break;
    uVar3 = EnumClipboardFormats(uVar3 & 0xffff);
    sVar6 = (short)uVar3;
  }
  pvVar4 = GetClipboardData(uVar3 & 0xffff);
  pvVar5 = GetClipboardData(9);
  FUN_0042d7f4(param_2,uVar3,pvVar4,pvVar5);
  FUN_004042fc();
  return;
}

