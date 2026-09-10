// Address: 004af478
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004af478(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char cVar5;
  undefined4 uStack_30;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_24 = &LAB_004af567;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  FUN_0042a5b0(param_2,&local_c,param_3,0);
  FUN_004051d4(&local_8,local_c);
  uStack_30 = 0x4af4ba;
  iVar2 = FUN_004b134c(PTR_DAT_004addd4,1,local_8);
  if (*(int *)(iVar2 + 8) - 0xeU < 2) {
    FUN_00403a84(iVar2);
    uStack_30 = 0;
    iVar2 = FUN_004b134c(PTR_DAT_004addd4,1,L"Arial");
  }
  uVar3 = FUN_0042a660(param_2);
  cVar5 = (uVar3 & 1) != 0;
  uVar3 = FUN_0042a660(param_2);
  if ((uVar3 & 2) != 0) {
    cVar5 = cVar5 + '\x02';
  }
  uVar3 = FUN_0042a660(param_2);
  if ((uVar3 & 4) != 0) {
    cVar5 = cVar5 + '\x04';
  }
  uVar3 = FUN_0042a660(param_2);
  if ((uVar3 & 8) != 0) {
    cVar5 = cVar5 + '\b';
  }
  iVar4 = FUN_0042a624(param_2);
  FUN_004b140c(PTR_DAT_004ade30,1,iVar2,3,cVar5,(float)iVar4);
  FUN_00403a84(iVar2);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004af56e;
  FUN_004048d4(&local_c,uStack_30,puVar1);
  FUN_00404ff0(&local_8);
  return;
}

