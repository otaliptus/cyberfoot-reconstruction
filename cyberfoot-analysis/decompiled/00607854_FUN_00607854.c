// Address: 00607854
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4
FUN_00607854(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x3ffe;
  uVar4 = 0x80000000;
  uVar3 = 0;
  iVar2 = FUN_006078a8(param_1,param_6,param_3,0,0x80000000,0x3ffe);
  uVar3 = FUN_006071e8(*(undefined4 *)(&DAT_0066a434 + iVar2 * 4),param_2,param_3,uVar3,uVar4,uVar5)
  ;
  cVar1 = FUN_006071c4(uVar3,100);
  if (cVar1 == '\0') {
    uVar3 = 2;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

