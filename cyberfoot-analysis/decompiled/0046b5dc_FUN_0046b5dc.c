// Address: 0046b5dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046b5dc(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0046b684;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar3 = (char)param_2;
  puVar1 = &stack0xfffffffc;
  if ((cVar3 != *(char *)(param_1 + 0x1a8)) &&
     (*(char *)(param_1 + 0x1a8) = cVar3, puVar1 = &stack0xfffffffc,
     (*(byte *)(param_1 + 0x1c) & 0x10) == 0)) {
    FUN_00463eb4(param_1,param_2);
    if (cVar3 == '\0') {
      FUN_00403a84(*(undefined4 *)(param_1 + 0x178));
      *(undefined4 *)(param_1 + 0x178) = 0;
      FUN_00406880(param_1 + 0x17c);
      puVar1 = puStack_18;
    }
    else {
      if (*(int *)(param_1 + 0x178) == 0) {
        uVar2 = FUN_00403a54(PTR_PTR_0041b73c,1);
        *(undefined4 *)(param_1 + 0x178) = uVar2;
      }
      FUN_00403c80(param_1,&local_8);
      FUN_00406898(param_1 + 0x17c,local_8);
      puVar1 = puStack_18;
    }
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0046b68b;
  puStack_1c = (undefined1 *)0x46b683;
  FUN_00406880(&local_8,uStack_20,puVar1);
  return;
}

