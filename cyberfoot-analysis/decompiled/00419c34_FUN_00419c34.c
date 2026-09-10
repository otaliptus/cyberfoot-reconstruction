// Address: 00419c34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00419c34(char *param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00419cf2;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*param_1 == '\x01') {
    puStack_18 = &stack0xfffffffc;
    FUN_00409dd8(param_2,param_3);
  }
  else {
    iVar3 = FUN_00419c28(param_1);
    iVar3 = FUN_00419c28(**(undefined4 **)(iVar3 + 9));
    if ((param_1 == PTR_DAT_00401000) || (*(int *)(iVar3 + 1) < 0)) {
      FUN_00404928(param_3,(&PTR_s_False_00662584)[param_2 != 0]);
      cVar2 = FUN_004096cc(*(undefined4 *)PTR_PTR_0066b658,&DAT_00419d08);
      if (cVar2 != '\0') {
        FUN_004095ec(*param_3,&local_8);
        FUN_00404928(param_3,local_8);
      }
    }
    else {
      pbVar4 = (byte *)(iVar3 + 0xd);
      for (; param_2 != 0; param_2 = param_2 + -1) {
        pbVar4 = pbVar4 + *pbVar4 + 1;
      }
      FUN_00404b48(param_3,pbVar4);
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00419cf9;
  puStack_1c = (undefined1 *)0x419cf1;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

