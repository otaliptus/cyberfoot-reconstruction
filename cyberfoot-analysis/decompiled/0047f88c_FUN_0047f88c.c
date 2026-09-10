// Address: 0047f88c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047f88c(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = *(undefined4 *)(param_2 + 4);
  puStack_18 = &LAB_0047f8ed;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = FUN_00403c10(param_1,PTR_PTR_0047be68);
  if (cVar1 == '\0') {
    *(undefined4 *)(local_c + 4) = 1;
  }
  FUN_0046bd7c(local_8,local_c);
  *in_FS_OFFSET = uStack_1c;
  *(undefined4 *)(local_c + 4) = local_10;
  return;
}

