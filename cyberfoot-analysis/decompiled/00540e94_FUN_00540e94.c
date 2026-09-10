// Address: 00540e94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00540e94(int param_1,byte param_2,undefined4 param_3)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  byte local_9;
  int local_8;
  
  local_10 = 0;
  puStack_20 = (undefined1 *)0x540eb2;
  local_9 = param_2;
  local_8 = param_1;
  FUN_00405608(&local_8);
  puStack_24 = &LAB_00540f49;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00404ff0(param_3);
  iVar3 = FUN_00405260(local_8);
  if (0 < iVar3) {
    iVar4 = 1;
    do {
      sVar1 = *(short *)(local_8 + -2 + iVar4 * 2);
      if ((sVar1 == 10) || (sVar1 == 0xd)) {
        if ((*(short *)(local_8 + -2 + iVar4 * 2) == 0xd & local_9) != 0) {
          FUN_0040526c(param_3,L"<BR>");
        }
      }
      else {
        FUN_00405118(&local_10,*(undefined2 *)(local_8 + -2 + iVar4 * 2));
        FUN_0040526c(param_3,local_10);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00540f50;
  puStack_24 = (undefined1 *)0x540f40;
  FUN_00404ff0(&local_10,uStack_28,puVar2);
  puStack_24 = (undefined1 *)0x540f48;
  FUN_00404ff0(&local_8);
  return;
}

