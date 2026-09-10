// Address: 0045223c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045223c(int param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_33;
  uint local_2f;
  int iStack_2b;
  undefined4 local_27;
  undefined4 local_1b;
  
  cVar2 = FUN_0046cde4(param_1);
  if (cVar2 != '\0') {
    iVar3 = FUN_0044db94(*(undefined4 *)(param_1 + 0x23c),param_2);
    local_33 = 0x15;
    local_1b = *(undefined4 *)(iVar3 + 0x1c);
    local_27 = FUN_00404da4(*(undefined4 *)(iVar3 + 0x10));
    bVar1 = *(byte *)(iVar3 + 0xc);
    iVar4 = FUN_0041ea50(iVar3);
    if (iVar4 == 0) {
      local_2f = 0;
    }
    else {
      uVar5 = FUN_00403c80(param_1);
      local_2f = *(uint *)(&DAT_00662dd4 + (uint)bVar1 * 4 + (uVar5 & 0x7f) * 0xc);
    }
    if (*(int *)(iVar3 + 0x1c) == -1) {
      local_33 = local_33 & 0xffffffef;
    }
    else {
      local_2f = local_2f | 0x8800;
    }
    iStack_2b = *(int *)(iVar3 + 0x24);
    if (iStack_2b < 0) {
      iVar4 = FUN_0044db94(*(undefined4 *)(param_1 + 0x23c),param_2);
      uVar7 = *(undefined4 *)(iVar4 + 0x28);
      uVar6 = FUN_0046cae0(param_1);
      FUN_00432d64(uVar6,uVar7,&local_33);
      if (*(char *)(param_1 + 0x215) == '\x02') {
        uVar7 = FUN_0046cae0(param_1);
        FUN_00432dc0(uVar7,0xffffffff,*(undefined4 *)(iVar3 + 0x24));
      }
      else if ((*(char *)(param_1 + 0x215) == '\x03') && (*(char *)(param_1 + 0x244) == '\0')) {
        iVar4 = FUN_0044db94(*(undefined4 *)(param_1 + 0x23c),param_2);
        uVar7 = *(undefined4 *)(iVar4 + 0x28);
        uVar6 = FUN_0046cae0(param_1);
        FUN_00432dc0(uVar6,uVar7,*(undefined4 *)(iVar3 + 0x24));
      }
    }
    else {
      local_33 = local_33 | 2;
      iVar3 = FUN_0044db94(*(undefined4 *)(param_1 + 0x23c),param_2);
      uVar7 = *(undefined4 *)(iVar3 + 0x28);
      uVar6 = FUN_0046cae0(param_1);
      FUN_00432d64(uVar6,uVar7,&local_33);
    }
  }
  return;
}

