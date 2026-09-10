// Address: 0046cf08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046cf08(int param_1,undefined4 param_2,char param_3,char param_4,char param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_14;
  int local_10;
  
  local_10 = 0;
  puStack_28 = (undefined1 *)0x46cf2a;
  iVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
  puStack_2c = &LAB_0046cffe;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00403c80(param_1,iVar3);
  if (0 < *(int *)(iVar3 + 8)) {
    local_14 = FUN_0041e078(iVar3,param_2);
    iVar5 = local_14;
    if (local_14 == -1) {
      if (param_3 == '\0') {
        local_14 = 0;
        iVar5 = local_14;
      }
      else {
        local_14 = *(int *)(iVar3 + 8) + -1;
        iVar5 = local_14;
      }
    }
    do {
      if (param_3 == '\0') {
        if (iVar5 == 0) {
          iVar5 = *(int *)(iVar3 + 8);
        }
        iVar5 = iVar5 + -1;
      }
      else {
        iVar5 = iVar5 + 1;
        if (iVar5 == *(int *)(iVar3 + 8)) {
          iVar5 = 0;
        }
      }
      iVar4 = FUN_0041e01c(iVar3,iVar5);
      cVar2 = FUN_00403c80(iVar4);
      if (((cVar2 != '\0') && ((param_5 == '\0' || (*(char *)(iVar4 + 0x1a4) != '\0')))) &&
         ((param_4 == '\0' || (*(int *)(iVar4 + 0x30) == param_1)))) {
        local_10 = iVar4;
      }
    } while ((local_10 == 0) && (iVar5 != local_14));
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0046d005;
  puStack_2c = (undefined1 *)0x46cffd;
  FUN_00403a84(iVar3,uStack_30,puVar1);
  return;
}

