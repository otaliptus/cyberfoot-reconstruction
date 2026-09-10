// Address: 006078b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_006078b4(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x3ffd;
  uVar4 = 0x99999999;
  uVar3 = 0x9999999a;
  iVar2 = FUN_006078a8(param_1,param_4,param_3,0x9999999a,0x99999999,0x3ffd);
  uVar3 = FUN_006071e8(*(undefined4 *)(&DAT_0066a494 + iVar2 * 4),param_2,param_3,uVar3,uVar4,uVar5)
  ;
  cVar1 = FUN_006071c4(uVar3,100);
  if (cVar1 == '\0') {
    uVar3 = 2;
  }
  else {
    uVar3 = 0xffffffff;
  }
  if ((0 < param_2) && (param_3 == 0)) {
    uVar3 = 2;
  }
  return uVar3;
}

