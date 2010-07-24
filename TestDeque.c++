
  
  

  


<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
  <head>
    <meta http-equiv="content-type" content="text/html;charset=UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
        <title>projects/deque/TestDeque.c++ at master from gpdowning's cs378 - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="http://github.com/fluidicon.png" title="GitHub" />

    <link href="http://assets0.github.com/stylesheets/bundle_common.css?994fb815236ea531ca768abfa201f2b2efc8aacf" media="screen" rel="stylesheet" type="text/css" />
<link href="http://assets0.github.com/stylesheets/bundle_github.css?994fb815236ea531ca768abfa201f2b2efc8aacf" media="screen" rel="stylesheet" type="text/css" />

    <script type="text/javascript" charset="utf-8">
      var GitHub = {}
      var github_user = null
      
    </script>
    <script src="http://assets2.github.com/javascripts/jquery/jquery-1.4.2.min.js?994fb815236ea531ca768abfa201f2b2efc8aacf" type="text/javascript"></script>
    <script src="http://assets2.github.com/javascripts/bundle_common.js?994fb815236ea531ca768abfa201f2b2efc8aacf" type="text/javascript"></script>
<script src="http://assets3.github.com/javascripts/bundle_github.js?994fb815236ea531ca768abfa201f2b2efc8aacf" type="text/javascript"></script>

        <script type="text/javascript" charset="utf-8">
      GitHub.spy({
        repo: "gpdowning/cs378"
      })
    </script>

    
  
    
  

  <link href="http://github.com/gpdowning/cs378/commits/master.atom" rel="alternate" title="Recent Commits to cs378:master" type="application/atom+xml" />

        <meta name="description" content="Generic Programming and the STL" />
    <script type="text/javascript">
      GitHub.nameWithOwner = GitHub.nameWithOwner || "gpdowning/cs378";
      GitHub.currentRef = 'master';
    </script>
  

            <script type="text/javascript">
      var _gaq = _gaq || [];
      _gaq.push(['_setAccount', 'UA-3769691-2']);
      _gaq.push(['_trackPageview']);
      (function() {
        var ga = document.createElement('script');
        ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
        ga.setAttribute('async', 'true');
        document.documentElement.firstChild.appendChild(ga);
      })();
    </script>

  </head>

  

  <body>
    

    
      <script type="text/javascript">
        var _kmq = _kmq || [];
        function _kms(u){
          var s = document.createElement('script'); var f = document.getElementsByTagName('script')[0]; s.type = 'text/javascript'; s.async = true;
          s.src = u; f.parentNode.insertBefore(s, f);
        }
        _kms('//i.kissmetrics.com/i.js');_kms('//doug1izaerwt3.cloudfront.net/406e8bf3a2b8846ead55afb3cfaf6664523e3a54.1.js');
      </script>
    

    

    

    

    <div class="subnavd" id="main">
      <div id="header" class="pageheaded">
        <div class="site">
          <div class="logo">
            <a href="http://github.com"><img src="/images/modules/header/logov3.png" alt="github" /></a>
          </div>
          
          <div class="topsearch">
  
    <form action="/search" id="top_search_form" method="get">
      <a href="/search" class="advanced-search tooltipped downwards" title="Advanced Search">Advanced Search</a>
      <input type="search" class="search my_repos_autocompleter" name="q" results="5" placeholder="Search&hellip;" /> <input type="submit" value="Search" class="button" />
      <input type="hidden" name="type" value="Everything" />
      <input type="hidden" name="repo" value="" />
      <input type="hidden" name="langOverride" value="" />
      <input type="hidden" name="start_value" value="1" />
    </form>
  
  
    <ul class="nav logged_out">
      
        <li><a href="http://github.com">Home</a></li>
        <li class="pricing"><a href="/plans">Pricing and Signup</a></li>
        <li><a href="http://github.com/explore">Explore GitHub</a></li>
        
        <li><a href="/blog">Blog</a></li>
      
      <li><a href="https://github.com/login">Login</a></li>
    </ul>
  
</div>

        </div>
      </div>

      
      
        
    <div class="site">
      <div class="pagehead repohead vis-public   ">
        <h1>
          <a href="/gpdowning">gpdowning</a> / <strong><a href="http://github.com/gpdowning/cs378">cs378</a></strong>
          
          
        </h1>

        
    <ul class="actions">
      

      
        <li class="for-owner" style="display:none"><a href="https://github.com/gpdowning/cs378/edit" class="minibutton btn-admin "><span><span class="icon"></span>Admin</span></a></li>
        <li>
          <a href="/gpdowning/cs378/toggle_watch" class="minibutton btn-watch " id="watch_button" style="display:none"><span><span class="icon"></span>Watch</span></a>
          <a href="/gpdowning/cs378/toggle_watch" class="minibutton btn-watch " id="unwatch_button" style="display:none"><span><span class="icon"></span>Unwatch</span></a>
        </li>
        
          
            <li class="for-notforked" style="display:none"><a href="/gpdowning/cs378/fork" class="minibutton btn-fork " id="fork_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'f20d0be84e9dfdc578d296a3328c834cccaf3cc5'); f.appendChild(s);f.submit();return false;"><span><span class="icon"></span>Fork</span></a></li>
            <li class="for-hasfork" style="display:none"><a href="#" class="minibutton btn-fork " id="your_fork_button"><span><span class="icon"></span>Your Fork</span></a></li>
          

          
          <li id="pull_request_item" class='ospr' style="display:none"><a href="/gpdowning/cs378/pull_request/" class="minibutton btn-pull-request "><span><span class="icon"></span>Pull Request</span></a></li>
          

          <li><a href="#" class="minibutton btn-download " id="download_button"><span><span class="icon"></span>Download Source</span></a></li>
        
      
      
      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers"><a href="/gpdowning/cs378/watchers" title="Watchers" class="tooltipped downwards">1</a></li>
          <li class="forks"><a href="/gpdowning/cs378/network" title="Forks" class="tooltipped downwards">1</a></li>
        </ul>
      </li>
    </ul>


        
  <ul class="tabs">
    <li><a href="http://github.com/gpdowning/cs378/tree/master" class="selected" highlight="repo_source">Source</a></li>
    <li><a href="http://github.com/gpdowning/cs378/commits/master" highlight="repo_commits">Commits</a></li>

    
    <li><a href="/gpdowning/cs378/network" highlight="repo_network">Network (1)</a></li>

    

    
      
      <li><a href="/gpdowning/cs378/issues" highlight="issues">Issues (0)</a></li>
    

    
      
      <li><a href="/gpdowning/cs378/downloads">Downloads (0)</a></li>
    

          
      <li><a href="http://wiki.github.com/gpdowning/cs378/">Wiki (1)</a></li>
    
    <li><a href="/gpdowning/cs378/graphs" highlight="repo_graphs">Graphs</a></li>

    <li class="contextswitch nochoices">
      <span class="toggle leftwards" >
        <em>Branch:</em>
        <code>master</code>
      </span>
    </li>
  </ul>

  <div style="display:none" id="pl-description"><p><em class="placeholder">click here to add a description</em></p></div>
  <div style="display:none" id="pl-homepage"><p><em class="placeholder">click here to add a homepage</em></p></div>

  <div class="subnav-bar">
  
  <ul>
    <li>
      <a href="#" class="dropdown">Switch Branches (1)</a>
      <ul>
        
          
            <li><strong>master &#x2713;</strong></li>
            
      </ul>
    </li>
    <li>
      <a href="#" class="dropdown defunct">Switch Tags (0)</a>
      
    </li>
    <li>
    
    <a href="/gpdowning/cs378/branches" class="manage">Branch List</a>
    
    </li>
  </ul>
</div>

  
  
  
  
  



        
    <div id="repo_details" class="metabox clearfix">
      <div id="repo_details_loader" class="metabox-loader" style="display:none">Sending Request&hellip;</div>

      

      <div id="repository_description" rel="repository_description_edit">
        
          <p>Generic Programming and the STL
            <span id="read_more" style="display:none">&mdash; <a href="#readme">Read more</a></span>
          </p>
        
      </div>
      <div id="repository_description_edit" style="display:none;" class="inline-edit">
        <form action="/gpdowning/cs378/edit/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="f20d0be84e9dfdc578d296a3328c834cccaf3cc5" /></div>
          <input type="hidden" name="field" value="repository_description">
          <input type="text" class="textfield" name="value" value="Generic Programming and the STL">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      
      <div class="repository-homepage" id="repository_homepage" rel="repository_homepage_edit">
        <p><a href="http://www.cs.utexas.edu/users/downing/cs378/" rel="nofollow">http://www.cs.utexas.edu/users/downing/cs378/</a></p>
      </div>
      <div id="repository_homepage_edit" style="display:none;" class="inline-edit">
        <form action="/gpdowning/cs378/edit/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="f20d0be84e9dfdc578d296a3328c834cccaf3cc5" /></div>
          <input type="hidden" name="field" value="repository_homepage">
          <input type="text" class="textfield" name="value" value="http://www.cs.utexas.edu/users/downing/cs378/">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      <div class="rule "></div>

      <div id="url_box" class="url-box">
        <ul class="clone-urls">
          
            
            <li id="http_clone_url"><a href="http://github.com/gpdowning/cs378.git" data-permissions="Read-Only">HTTP</a></li>
            <li id="public_clone_url"><a href="git://github.com/gpdowning/cs378.git" data-permissions="Read-Only">Git Read-Only</a></li>
          
        </ul>
        <input type="text" spellcheck="false" id="url_field" class="url-field" />
              <span style="display:none" id="url_box_clippy"></span>
      <span id="clippy_tooltip_url_box_clippy" class="clippy-tooltip tooltipped" title="copy to clipboard">
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="14"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="http://assets2.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=url_box_clippy&amp;copied=&amp;copyto=">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="http://assets2.github.com/flash/clippy.swf?v5"
             width="14"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=url_box_clippy&amp;copied=&amp;copyto="
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      </span>

        <p id="url_description">This URL has <strong>Read+Write</strong> access</p>
      </div>
    </div>


        

      </div><!-- /.pagehead -->

      









<script type="text/javascript">
  GitHub.currentCommitRef = 'master'
  GitHub.currentRepoOwner = 'gpdowning'
  GitHub.currentRepo = "cs378"
  GitHub.downloadRepo = '/gpdowning/cs378/archives/master'

  

  
</script>










  <div id="commit">
    <div class="group">
        
  <div class="envelope commit">
    <div class="human">
      
        <div class="message"><pre><a href="/gpdowning/cs378/commit/92ce3dc907583dc641c0c3a6d049211750aa6188">another commit</a> </pre></div>
      

      <div class="actor">
        <div class="gravatar">
          
          <img src="http://www.gravatar.com/avatar/c68346c6ef4ab45d5d60a836d2f99fb6?s=140&d=http%3A%2F%2Fgithub.com%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="30" height="30"  />
        </div>
        <div class="name"><a href="/gpdowning">gpdowning</a> <span>(author)</span></div>
        <div class="date">
          <abbr class="relatize" title="2010-07-23 15:41:03">Fri Jul 23 15:41:03 -0700 2010</abbr>
        </div>
      </div>

      

    </div>
    <div class="machine">
      <span>c</span>ommit&nbsp;&nbsp;<a href="/gpdowning/cs378/commit/92ce3dc907583dc641c0c3a6d049211750aa6188" hotkey="c">92ce3dc907583dc641c0</a><br />
      <span>t</span>ree&nbsp;&nbsp;&nbsp;&nbsp;<a href="/gpdowning/cs378/tree/92ce3dc907583dc641c0c3a6d049211750aa6188/projects/deque/Deque.h" hotkey="t">6a7205e0c391ed887f20</a><br />
      
        <span>p</span>arent&nbsp;
        
        <a href="/gpdowning/cs378/commit/0ab64b9b4b97ee21f6ff43b3c28e336aec790ce8" hotkey="p">0ab64b9b4b97ee21f6ff</a>
      

    </div>
  </div>

    </div>
  </div>



  
    <div id="path">
      <b><a href="/gpdowning/cs378/tree/master">cs378</a></b> / <a href="/gpdowning/cs378/tree/master/projects">projects</a> / <a href="/gpdowning/cs378/tree/master/projects/deque">deque</a> / TestDeque.c++       <span style="display:none" id="clippy_624">projects/deque/TestDeque.c++</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="http://assets2.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_624&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="http://assets2.github.com/flash/clippy.swf?v5"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_624&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div id="files">
      <div class="file">
        <div class="meta">
          <div class="info">
            <span class="icon"><img alt="Txt" height="16" src="http://assets3.github.com/images/icons/txt.png?994fb815236ea531ca768abfa201f2b2efc8aacf" width="16" /></span>
            <span class="mode" title="File Mode">100644</span>
            
              <span>310 lines (253 sloc)</span>
            
            <span>7.099 kb</span>
          </div>
          <ul class="actions">
            
              <li><a id="file-edit-link" href="#" rel="/gpdowning/cs378/file-edit/__ref__/projects/deque/TestDeque.c++">edit</a></li>
            
            <li><a href="/gpdowning/cs378/raw/master/projects/deque/TestDeque.c++" id="raw-url">raw</a></li>
            
              <li><a href="/gpdowning/cs378/blame/master/projects/deque/TestDeque.c++">blame</a></li>
            
            <li><a href="/gpdowning/cs378/commits/master/projects/deque/TestDeque.c++">history</a></li>
          </ul>
        </div>
        
  <div class="data syntax type-cpp">
    
      <table cellpadding="0" cellspacing="0">
        <tr>
          <td>
            <pre class="line_numbers"><span id="LID1" rel="#L1">1</span>
<span id="LID2" rel="#L2">2</span>
<span id="LID3" rel="#L3">3</span>
<span id="LID4" rel="#L4">4</span>
<span id="LID5" rel="#L5">5</span>
<span id="LID6" rel="#L6">6</span>
<span id="LID7" rel="#L7">7</span>
<span id="LID8" rel="#L8">8</span>
<span id="LID9" rel="#L9">9</span>
<span id="LID10" rel="#L10">10</span>
<span id="LID11" rel="#L11">11</span>
<span id="LID12" rel="#L12">12</span>
<span id="LID13" rel="#L13">13</span>
<span id="LID14" rel="#L14">14</span>
<span id="LID15" rel="#L15">15</span>
<span id="LID16" rel="#L16">16</span>
<span id="LID17" rel="#L17">17</span>
<span id="LID18" rel="#L18">18</span>
<span id="LID19" rel="#L19">19</span>
<span id="LID20" rel="#L20">20</span>
<span id="LID21" rel="#L21">21</span>
<span id="LID22" rel="#L22">22</span>
<span id="LID23" rel="#L23">23</span>
<span id="LID24" rel="#L24">24</span>
<span id="LID25" rel="#L25">25</span>
<span id="LID26" rel="#L26">26</span>
<span id="LID27" rel="#L27">27</span>
<span id="LID28" rel="#L28">28</span>
<span id="LID29" rel="#L29">29</span>
<span id="LID30" rel="#L30">30</span>
<span id="LID31" rel="#L31">31</span>
<span id="LID32" rel="#L32">32</span>
<span id="LID33" rel="#L33">33</span>
<span id="LID34" rel="#L34">34</span>
<span id="LID35" rel="#L35">35</span>
<span id="LID36" rel="#L36">36</span>
<span id="LID37" rel="#L37">37</span>
<span id="LID38" rel="#L38">38</span>
<span id="LID39" rel="#L39">39</span>
<span id="LID40" rel="#L40">40</span>
<span id="LID41" rel="#L41">41</span>
<span id="LID42" rel="#L42">42</span>
<span id="LID43" rel="#L43">43</span>
<span id="LID44" rel="#L44">44</span>
<span id="LID45" rel="#L45">45</span>
<span id="LID46" rel="#L46">46</span>
<span id="LID47" rel="#L47">47</span>
<span id="LID48" rel="#L48">48</span>
<span id="LID49" rel="#L49">49</span>
<span id="LID50" rel="#L50">50</span>
<span id="LID51" rel="#L51">51</span>
<span id="LID52" rel="#L52">52</span>
<span id="LID53" rel="#L53">53</span>
<span id="LID54" rel="#L54">54</span>
<span id="LID55" rel="#L55">55</span>
<span id="LID56" rel="#L56">56</span>
<span id="LID57" rel="#L57">57</span>
<span id="LID58" rel="#L58">58</span>
<span id="LID59" rel="#L59">59</span>
<span id="LID60" rel="#L60">60</span>
<span id="LID61" rel="#L61">61</span>
<span id="LID62" rel="#L62">62</span>
<span id="LID63" rel="#L63">63</span>
<span id="LID64" rel="#L64">64</span>
<span id="LID65" rel="#L65">65</span>
<span id="LID66" rel="#L66">66</span>
<span id="LID67" rel="#L67">67</span>
<span id="LID68" rel="#L68">68</span>
<span id="LID69" rel="#L69">69</span>
<span id="LID70" rel="#L70">70</span>
<span id="LID71" rel="#L71">71</span>
<span id="LID72" rel="#L72">72</span>
<span id="LID73" rel="#L73">73</span>
<span id="LID74" rel="#L74">74</span>
<span id="LID75" rel="#L75">75</span>
<span id="LID76" rel="#L76">76</span>
<span id="LID77" rel="#L77">77</span>
<span id="LID78" rel="#L78">78</span>
<span id="LID79" rel="#L79">79</span>
<span id="LID80" rel="#L80">80</span>
<span id="LID81" rel="#L81">81</span>
<span id="LID82" rel="#L82">82</span>
<span id="LID83" rel="#L83">83</span>
<span id="LID84" rel="#L84">84</span>
<span id="LID85" rel="#L85">85</span>
<span id="LID86" rel="#L86">86</span>
<span id="LID87" rel="#L87">87</span>
<span id="LID88" rel="#L88">88</span>
<span id="LID89" rel="#L89">89</span>
<span id="LID90" rel="#L90">90</span>
<span id="LID91" rel="#L91">91</span>
<span id="LID92" rel="#L92">92</span>
<span id="LID93" rel="#L93">93</span>
<span id="LID94" rel="#L94">94</span>
<span id="LID95" rel="#L95">95</span>
<span id="LID96" rel="#L96">96</span>
<span id="LID97" rel="#L97">97</span>
<span id="LID98" rel="#L98">98</span>
<span id="LID99" rel="#L99">99</span>
<span id="LID100" rel="#L100">100</span>
<span id="LID101" rel="#L101">101</span>
<span id="LID102" rel="#L102">102</span>
<span id="LID103" rel="#L103">103</span>
<span id="LID104" rel="#L104">104</span>
<span id="LID105" rel="#L105">105</span>
<span id="LID106" rel="#L106">106</span>
<span id="LID107" rel="#L107">107</span>
<span id="LID108" rel="#L108">108</span>
<span id="LID109" rel="#L109">109</span>
<span id="LID110" rel="#L110">110</span>
<span id="LID111" rel="#L111">111</span>
<span id="LID112" rel="#L112">112</span>
<span id="LID113" rel="#L113">113</span>
<span id="LID114" rel="#L114">114</span>
<span id="LID115" rel="#L115">115</span>
<span id="LID116" rel="#L116">116</span>
<span id="LID117" rel="#L117">117</span>
<span id="LID118" rel="#L118">118</span>
<span id="LID119" rel="#L119">119</span>
<span id="LID120" rel="#L120">120</span>
<span id="LID121" rel="#L121">121</span>
<span id="LID122" rel="#L122">122</span>
<span id="LID123" rel="#L123">123</span>
<span id="LID124" rel="#L124">124</span>
<span id="LID125" rel="#L125">125</span>
<span id="LID126" rel="#L126">126</span>
<span id="LID127" rel="#L127">127</span>
<span id="LID128" rel="#L128">128</span>
<span id="LID129" rel="#L129">129</span>
<span id="LID130" rel="#L130">130</span>
<span id="LID131" rel="#L131">131</span>
<span id="LID132" rel="#L132">132</span>
<span id="LID133" rel="#L133">133</span>
<span id="LID134" rel="#L134">134</span>
<span id="LID135" rel="#L135">135</span>
<span id="LID136" rel="#L136">136</span>
<span id="LID137" rel="#L137">137</span>
<span id="LID138" rel="#L138">138</span>
<span id="LID139" rel="#L139">139</span>
<span id="LID140" rel="#L140">140</span>
<span id="LID141" rel="#L141">141</span>
<span id="LID142" rel="#L142">142</span>
<span id="LID143" rel="#L143">143</span>
<span id="LID144" rel="#L144">144</span>
<span id="LID145" rel="#L145">145</span>
<span id="LID146" rel="#L146">146</span>
<span id="LID147" rel="#L147">147</span>
<span id="LID148" rel="#L148">148</span>
<span id="LID149" rel="#L149">149</span>
<span id="LID150" rel="#L150">150</span>
<span id="LID151" rel="#L151">151</span>
<span id="LID152" rel="#L152">152</span>
<span id="LID153" rel="#L153">153</span>
<span id="LID154" rel="#L154">154</span>
<span id="LID155" rel="#L155">155</span>
<span id="LID156" rel="#L156">156</span>
<span id="LID157" rel="#L157">157</span>
<span id="LID158" rel="#L158">158</span>
<span id="LID159" rel="#L159">159</span>
<span id="LID160" rel="#L160">160</span>
<span id="LID161" rel="#L161">161</span>
<span id="LID162" rel="#L162">162</span>
<span id="LID163" rel="#L163">163</span>
<span id="LID164" rel="#L164">164</span>
<span id="LID165" rel="#L165">165</span>
<span id="LID166" rel="#L166">166</span>
<span id="LID167" rel="#L167">167</span>
<span id="LID168" rel="#L168">168</span>
<span id="LID169" rel="#L169">169</span>
<span id="LID170" rel="#L170">170</span>
<span id="LID171" rel="#L171">171</span>
<span id="LID172" rel="#L172">172</span>
<span id="LID173" rel="#L173">173</span>
<span id="LID174" rel="#L174">174</span>
<span id="LID175" rel="#L175">175</span>
<span id="LID176" rel="#L176">176</span>
<span id="LID177" rel="#L177">177</span>
<span id="LID178" rel="#L178">178</span>
<span id="LID179" rel="#L179">179</span>
<span id="LID180" rel="#L180">180</span>
<span id="LID181" rel="#L181">181</span>
<span id="LID182" rel="#L182">182</span>
<span id="LID183" rel="#L183">183</span>
<span id="LID184" rel="#L184">184</span>
<span id="LID185" rel="#L185">185</span>
<span id="LID186" rel="#L186">186</span>
<span id="LID187" rel="#L187">187</span>
<span id="LID188" rel="#L188">188</span>
<span id="LID189" rel="#L189">189</span>
<span id="LID190" rel="#L190">190</span>
<span id="LID191" rel="#L191">191</span>
<span id="LID192" rel="#L192">192</span>
<span id="LID193" rel="#L193">193</span>
<span id="LID194" rel="#L194">194</span>
<span id="LID195" rel="#L195">195</span>
<span id="LID196" rel="#L196">196</span>
<span id="LID197" rel="#L197">197</span>
<span id="LID198" rel="#L198">198</span>
<span id="LID199" rel="#L199">199</span>
<span id="LID200" rel="#L200">200</span>
<span id="LID201" rel="#L201">201</span>
<span id="LID202" rel="#L202">202</span>
<span id="LID203" rel="#L203">203</span>
<span id="LID204" rel="#L204">204</span>
<span id="LID205" rel="#L205">205</span>
<span id="LID206" rel="#L206">206</span>
<span id="LID207" rel="#L207">207</span>
<span id="LID208" rel="#L208">208</span>
<span id="LID209" rel="#L209">209</span>
<span id="LID210" rel="#L210">210</span>
<span id="LID211" rel="#L211">211</span>
<span id="LID212" rel="#L212">212</span>
<span id="LID213" rel="#L213">213</span>
<span id="LID214" rel="#L214">214</span>
<span id="LID215" rel="#L215">215</span>
<span id="LID216" rel="#L216">216</span>
<span id="LID217" rel="#L217">217</span>
<span id="LID218" rel="#L218">218</span>
<span id="LID219" rel="#L219">219</span>
<span id="LID220" rel="#L220">220</span>
<span id="LID221" rel="#L221">221</span>
<span id="LID222" rel="#L222">222</span>
<span id="LID223" rel="#L223">223</span>
<span id="LID224" rel="#L224">224</span>
<span id="LID225" rel="#L225">225</span>
<span id="LID226" rel="#L226">226</span>
<span id="LID227" rel="#L227">227</span>
<span id="LID228" rel="#L228">228</span>
<span id="LID229" rel="#L229">229</span>
<span id="LID230" rel="#L230">230</span>
<span id="LID231" rel="#L231">231</span>
<span id="LID232" rel="#L232">232</span>
<span id="LID233" rel="#L233">233</span>
<span id="LID234" rel="#L234">234</span>
<span id="LID235" rel="#L235">235</span>
<span id="LID236" rel="#L236">236</span>
<span id="LID237" rel="#L237">237</span>
<span id="LID238" rel="#L238">238</span>
<span id="LID239" rel="#L239">239</span>
<span id="LID240" rel="#L240">240</span>
<span id="LID241" rel="#L241">241</span>
<span id="LID242" rel="#L242">242</span>
<span id="LID243" rel="#L243">243</span>
<span id="LID244" rel="#L244">244</span>
<span id="LID245" rel="#L245">245</span>
<span id="LID246" rel="#L246">246</span>
<span id="LID247" rel="#L247">247</span>
<span id="LID248" rel="#L248">248</span>
<span id="LID249" rel="#L249">249</span>
<span id="LID250" rel="#L250">250</span>
<span id="LID251" rel="#L251">251</span>
<span id="LID252" rel="#L252">252</span>
<span id="LID253" rel="#L253">253</span>
<span id="LID254" rel="#L254">254</span>
<span id="LID255" rel="#L255">255</span>
<span id="LID256" rel="#L256">256</span>
<span id="LID257" rel="#L257">257</span>
<span id="LID258" rel="#L258">258</span>
<span id="LID259" rel="#L259">259</span>
<span id="LID260" rel="#L260">260</span>
<span id="LID261" rel="#L261">261</span>
<span id="LID262" rel="#L262">262</span>
<span id="LID263" rel="#L263">263</span>
<span id="LID264" rel="#L264">264</span>
<span id="LID265" rel="#L265">265</span>
<span id="LID266" rel="#L266">266</span>
<span id="LID267" rel="#L267">267</span>
<span id="LID268" rel="#L268">268</span>
<span id="LID269" rel="#L269">269</span>
<span id="LID270" rel="#L270">270</span>
<span id="LID271" rel="#L271">271</span>
<span id="LID272" rel="#L272">272</span>
<span id="LID273" rel="#L273">273</span>
<span id="LID274" rel="#L274">274</span>
<span id="LID275" rel="#L275">275</span>
<span id="LID276" rel="#L276">276</span>
<span id="LID277" rel="#L277">277</span>
<span id="LID278" rel="#L278">278</span>
<span id="LID279" rel="#L279">279</span>
<span id="LID280" rel="#L280">280</span>
<span id="LID281" rel="#L281">281</span>
<span id="LID282" rel="#L282">282</span>
<span id="LID283" rel="#L283">283</span>
<span id="LID284" rel="#L284">284</span>
<span id="LID285" rel="#L285">285</span>
<span id="LID286" rel="#L286">286</span>
<span id="LID287" rel="#L287">287</span>
<span id="LID288" rel="#L288">288</span>
<span id="LID289" rel="#L289">289</span>
<span id="LID290" rel="#L290">290</span>
<span id="LID291" rel="#L291">291</span>
<span id="LID292" rel="#L292">292</span>
<span id="LID293" rel="#L293">293</span>
<span id="LID294" rel="#L294">294</span>
<span id="LID295" rel="#L295">295</span>
<span id="LID296" rel="#L296">296</span>
<span id="LID297" rel="#L297">297</span>
<span id="LID298" rel="#L298">298</span>
<span id="LID299" rel="#L299">299</span>
<span id="LID300" rel="#L300">300</span>
<span id="LID301" rel="#L301">301</span>
<span id="LID302" rel="#L302">302</span>
<span id="LID303" rel="#L303">303</span>
<span id="LID304" rel="#L304">304</span>
<span id="LID305" rel="#L305">305</span>
<span id="LID306" rel="#L306">306</span>
<span id="LID307" rel="#L307">307</span>
<span id="LID308" rel="#L308">308</span>
<span id="LID309" rel="#L309">309</span>
<span id="LID310" rel="#L310">310</span>
</pre>
          </td>
          <td width="100%">
            
              <div class="highlight"><pre><div class='line' id='LC1'><span class="c1">// ----------------------------</span></div><div class='line' id='LC2'><span class="c1">// projects/deque/TestDeque.c++</span></div><div class='line' id='LC3'><span class="c1">// Copyright (C) 2010</span></div><div class='line' id='LC4'><span class="c1">// Glenn P. Downing</span></div><div class='line' id='LC5'><span class="c1">// ----------------------------</span></div><div class='line' id='LC6'><br/></div><div class='line' id='LC7'><span class="cm">/*</span></div><div class='line' id='LC8'><span class="cm">To test the program:</span></div><div class='line' id='LC9'><span class="cm">    % g++ -ansi -pedantic -lcppunit -ldl -Wall TestDeque.c++ -o TestDeque.app</span></div><div class='line' id='LC10'><span class="cm">    % valgrind TestDeque.app &gt;&amp; TestDeque.out</span></div><div class='line' id='LC11'><span class="cm">*/</span></div><div class='line' id='LC12'><br/></div><div class='line' id='LC13'><span class="c1">// --------</span></div><div class='line' id='LC14'><span class="c1">// includes</span></div><div class='line' id='LC15'><span class="c1">// --------</span></div><div class='line' id='LC16'><br/></div><div class='line' id='LC17'><span class="cp">#include &lt;algorithm&gt; </span><span class="c1">// copy, count, fill, reverse</span></div><div class='line' id='LC18'><span class="cp">#include &lt;deque&gt;     </span><span class="c1">// deque</span></div><div class='line' id='LC19'><span class="cp">#include &lt;memory&gt;    </span><span class="c1">// allocator</span></div><div class='line' id='LC20'><br/></div><div class='line' id='LC21'><span class="cp">#include "cppunit/extensions/HelperMacros.h" </span><span class="c1">// CPPUNIT_TEST, CPPUNIT_TEST_SUITE, CPPUNIT_TEST_SUITE_END</span></div><div class='line' id='LC22'><span class="cp">#include "cppunit/TestFixture.h"             </span><span class="c1">// TestFixture</span></div><div class='line' id='LC23'><span class="cp">#include "cppunit/TestSuite.h"               </span><span class="c1">// TestSuite</span></div><div class='line' id='LC24'><span class="cp">#include "cppunit/TextTestRunner.h"          </span><span class="c1">// TestRunner</span></div><div class='line' id='LC25'><br/></div><div class='line' id='LC26'><span class="cp">#include "Deque.h"</span></div><div class='line' id='LC27'><br/></div><div class='line' id='LC28'><span class="c1">// ---------</span></div><div class='line' id='LC29'><span class="c1">// TestDeque</span></div><div class='line' id='LC30'><span class="c1">// ---------</span></div><div class='line' id='LC31'><br/></div><div class='line' id='LC32'><span class="k">template</span> <span class="o">&lt;</span><span class="k">typename</span> <span class="n">C</span><span class="o">&gt;</span></div><div class='line' id='LC33'><span class="k">struct</span> <span class="n">TestDeque</span> <span class="o">:</span> <span class="n">CppUnit</span><span class="o">::</span><span class="n">TestFixture</span> <span class="p">{</span></div><div class='line' id='LC34'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ----------------</span></div><div class='line' id='LC35'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_constructor</span></div><div class='line' id='LC36'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ----------------</span></div><div class='line' id='LC37'><br/></div><div class='line' id='LC38'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_constructor</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC39'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">x</span><span class="p">;</span></div><div class='line' id='LC40'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">y</span><span class="p">(</span><span class="mi">10</span><span class="p">);</span></div><div class='line' id='LC41'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">z</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC42'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">t</span> <span class="o">=</span> <span class="n">z</span><span class="p">;}</span></div><div class='line' id='LC43'><br/></div><div class='line' id='LC44'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -------------</span></div><div class='line' id='LC45'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_equality</span></div><div class='line' id='LC46'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -------------</span></div><div class='line' id='LC47'><br/></div><div class='line' id='LC48'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_equality</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC49'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC50'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">y</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC51'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">x</span> <span class="o">==</span> <span class="n">y</span><span class="p">);</span></div><div class='line' id='LC52'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">x</span> <span class="o">!=</span> <span class="n">y</span><span class="p">));}</span></div><div class='line' id='LC53'><br/></div><div class='line' id='LC54'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ---------------</span></div><div class='line' id='LC55'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_comparison</span></div><div class='line' id='LC56'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ---------------</span></div><div class='line' id='LC57'><br/></div><div class='line' id='LC58'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_comparison</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC59'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC60'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">y</span><span class="p">(</span><span class="mi">20</span><span class="p">,</span> <span class="mi">3</span><span class="p">);</span></div><div class='line' id='LC61'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">x</span> <span class="o">&lt;</span> <span class="n">y</span><span class="p">);</span></div><div class='line' id='LC62'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">x</span> <span class="o">&gt;=</span> <span class="n">y</span><span class="p">));</span></div><div class='line' id='LC63'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">y</span> <span class="o">&gt;</span> <span class="n">x</span><span class="p">);</span></div><div class='line' id='LC64'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">y</span> <span class="o">&lt;=</span> <span class="n">x</span><span class="p">));}</span></div><div class='line' id='LC65'><br/></div><div class='line' id='LC66'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ---------------</span></div><div class='line' id='LC67'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_assignment</span></div><div class='line' id='LC68'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ---------------</span></div><div class='line' id='LC69'><br/></div><div class='line' id='LC70'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_assignment</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC71'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC72'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">y</span><span class="p">(</span><span class="mi">20</span><span class="p">,</span> <span class="mi">3</span><span class="p">);</span></div><div class='line' id='LC73'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">x</span> <span class="o">=</span> <span class="n">y</span><span class="p">;}</span></div><div class='line' id='LC74'><br/></div><div class='line' id='LC75'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// --------------</span></div><div class='line' id='LC76'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_subscript</span></div><div class='line' id='LC77'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// --------------</span></div><div class='line' id='LC78'><br/></div><div class='line' id='LC79'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_subscript</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC80'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC81'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">y</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC82'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">reference</span>       <span class="n">v</span> <span class="o">=</span> <span class="n">x</span><span class="p">[</span><span class="mi">0</span><span class="p">];</span></div><div class='line' id='LC83'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">const_reference</span> <span class="n">w</span> <span class="o">=</span> <span class="n">y</span><span class="p">[</span><span class="mi">0</span><span class="p">];</span></div><div class='line' id='LC84'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">v</span> <span class="o">==</span> <span class="n">w</span><span class="p">);}</span></div><div class='line' id='LC85'><br/></div><div class='line' id='LC86'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -------</span></div><div class='line' id='LC87'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_at</span></div><div class='line' id='LC88'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -------</span></div><div class='line' id='LC89'><br/></div><div class='line' id='LC90'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_at</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC91'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC92'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">y</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC93'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">reference</span>       <span class="n">v</span> <span class="o">=</span> <span class="n">x</span><span class="p">.</span><span class="n">at</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC94'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">const_reference</span> <span class="n">w</span> <span class="o">=</span> <span class="n">y</span><span class="p">.</span><span class="n">at</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC95'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">v</span> <span class="o">==</span> <span class="n">w</span><span class="p">);}</span></div><div class='line' id='LC96'><br/></div><div class='line' id='LC97'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ---------</span></div><div class='line' id='LC98'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_back</span></div><div class='line' id='LC99'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ---------</span></div><div class='line' id='LC100'><br/></div><div class='line' id='LC101'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_back</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC102'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC103'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">y</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC104'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">reference</span>       <span class="n">v</span> <span class="o">=</span> <span class="n">x</span><span class="p">.</span><span class="n">back</span><span class="p">();</span></div><div class='line' id='LC105'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">const_reference</span> <span class="n">w</span> <span class="o">=</span> <span class="n">y</span><span class="p">.</span><span class="n">back</span><span class="p">();</span></div><div class='line' id='LC106'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">v</span> <span class="o">==</span> <span class="n">w</span><span class="p">);}</span></div><div class='line' id='LC107'><br/></div><div class='line' id='LC108'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ----------</span></div><div class='line' id='LC109'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_begin</span></div><div class='line' id='LC110'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ----------</span></div><div class='line' id='LC111'><br/></div><div class='line' id='LC112'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_begin</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC113'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC114'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">y</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC115'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">iterator</span>       <span class="n">p</span> <span class="o">=</span> <span class="n">x</span><span class="p">.</span><span class="n">begin</span><span class="p">();</span></div><div class='line' id='LC116'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">const_iterator</span> <span class="n">q</span> <span class="o">=</span> <span class="n">y</span><span class="p">.</span><span class="n">begin</span><span class="p">();</span></div><div class='line' id='LC117'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="o">*</span><span class="n">p</span> <span class="o">==</span> <span class="o">*</span><span class="n">q</span><span class="p">);}</span></div><div class='line' id='LC118'><br/></div><div class='line' id='LC119'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ----------</span></div><div class='line' id='LC120'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_clear</span></div><div class='line' id='LC121'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ----------</span></div><div class='line' id='LC122'><br/></div><div class='line' id='LC123'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_clear</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC124'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC125'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">x</span><span class="p">.</span><span class="n">clear</span><span class="p">();</span></div><div class='line' id='LC126'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">x</span><span class="p">.</span><span class="n">empty</span><span class="p">());}</span></div><div class='line' id='LC127'><br/></div><div class='line' id='LC128'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ----------</span></div><div class='line' id='LC129'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_empty</span></div><div class='line' id='LC130'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ----------</span></div><div class='line' id='LC131'><br/></div><div class='line' id='LC132'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_empty</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC133'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span>    <span class="n">x</span><span class="p">;</span></div><div class='line' id='LC134'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">bool</span> <span class="n">b</span> <span class="o">=</span> <span class="n">x</span><span class="p">.</span><span class="n">empty</span><span class="p">();</span></div><div class='line' id='LC135'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">b</span><span class="p">);}</span></div><div class='line' id='LC136'><br/></div><div class='line' id='LC137'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// --------</span></div><div class='line' id='LC138'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_end</span></div><div class='line' id='LC139'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// --------</span></div><div class='line' id='LC140'><br/></div><div class='line' id='LC141'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_end</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC142'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC143'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">y</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC144'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">iterator</span>       <span class="n">p</span> <span class="o">=</span> <span class="n">x</span><span class="p">.</span><span class="n">end</span><span class="p">();</span></div><div class='line' id='LC145'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">const_iterator</span> <span class="n">q</span> <span class="o">=</span> <span class="n">y</span><span class="p">.</span><span class="n">end</span><span class="p">();</span></div><div class='line' id='LC146'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="o">*</span><span class="n">p</span> <span class="o">==</span> <span class="o">*</span><span class="n">q</span><span class="p">);}</span></div><div class='line' id='LC147'><br/></div><div class='line' id='LC148'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ----------</span></div><div class='line' id='LC149'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_erase</span></div><div class='line' id='LC150'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ----------</span></div><div class='line' id='LC151'><br/></div><div class='line' id='LC152'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_erase</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC153'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span>                    <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC154'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">iterator</span> <span class="n">p</span> <span class="o">=</span> <span class="n">x</span><span class="p">.</span><span class="n">erase</span><span class="p">(</span><span class="n">x</span><span class="p">.</span><span class="n">begin</span><span class="p">());</span></div><div class='line' id='LC155'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">p</span> <span class="o">==</span> <span class="n">x</span><span class="p">.</span><span class="n">begin</span><span class="p">());}</span></div><div class='line' id='LC156'><br/></div><div class='line' id='LC157'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ----------</span></div><div class='line' id='LC158'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_front</span></div><div class='line' id='LC159'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ----------</span></div><div class='line' id='LC160'><br/></div><div class='line' id='LC161'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_front</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC162'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC163'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">y</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC164'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">reference</span>       <span class="n">v</span> <span class="o">=</span> <span class="n">x</span><span class="p">.</span><span class="n">front</span><span class="p">();</span></div><div class='line' id='LC165'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">const_reference</span> <span class="n">w</span> <span class="o">=</span> <span class="n">y</span><span class="p">.</span><span class="n">front</span><span class="p">();</span></div><div class='line' id='LC166'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">v</span> <span class="o">==</span> <span class="n">w</span><span class="p">);}</span></div><div class='line' id='LC167'><br/></div><div class='line' id='LC168'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -----------</span></div><div class='line' id='LC169'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_insert</span></div><div class='line' id='LC170'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -----------</span></div><div class='line' id='LC171'><br/></div><div class='line' id='LC172'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_insert</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC173'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span>                    <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC174'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">iterator</span> <span class="n">p</span> <span class="o">=</span> <span class="n">x</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">x</span><span class="p">.</span><span class="n">begin</span><span class="p">(),</span> <span class="mi">3</span><span class="p">);</span></div><div class='line' id='LC175'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">p</span> <span class="o">==</span> <span class="n">x</span><span class="p">.</span><span class="n">begin</span><span class="p">());}</span></div><div class='line' id='LC176'><br/></div><div class='line' id='LC177'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -------------</span></div><div class='line' id='LC178'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_pop_back</span></div><div class='line' id='LC179'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -------------</span></div><div class='line' id='LC180'><br/></div><div class='line' id='LC181'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_pop_back</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC182'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC183'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">x</span><span class="p">.</span><span class="n">pop_back</span><span class="p">();}</span></div><div class='line' id='LC184'><br/></div><div class='line' id='LC185'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// --------------</span></div><div class='line' id='LC186'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_push_back</span></div><div class='line' id='LC187'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// --------------</span></div><div class='line' id='LC188'><br/></div><div class='line' id='LC189'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_push_back</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC190'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC191'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">x</span><span class="p">.</span><span class="n">push_back</span><span class="p">(</span><span class="mi">3</span><span class="p">);}</span></div><div class='line' id='LC192'><br/></div><div class='line' id='LC193'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -----------</span></div><div class='line' id='LC194'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_resize</span></div><div class='line' id='LC195'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -----------</span></div><div class='line' id='LC196'><br/></div><div class='line' id='LC197'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_resize</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC198'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC199'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">x</span><span class="p">.</span><span class="n">resize</span><span class="p">(</span><span class="mi">20</span><span class="p">);</span></div><div class='line' id='LC200'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">x</span><span class="p">.</span><span class="n">resize</span><span class="p">(</span><span class="mi">30</span><span class="p">,</span> <span class="mi">3</span><span class="p">);}</span></div><div class='line' id='LC201'><br/></div><div class='line' id='LC202'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ---------</span></div><div class='line' id='LC203'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_size</span></div><div class='line' id='LC204'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ---------</span></div><div class='line' id='LC205'><br/></div><div class='line' id='LC206'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_size</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC207'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">x</span><span class="p">;</span></div><div class='line' id='LC208'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">x</span><span class="p">.</span><span class="n">size</span><span class="p">()</span> <span class="o">==</span> <span class="mi">0</span><span class="p">);}</span></div><div class='line' id='LC209'><br/></div><div class='line' id='LC210'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ---------</span></div><div class='line' id='LC211'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_swap</span></div><div class='line' id='LC212'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ---------</span></div><div class='line' id='LC213'><br/></div><div class='line' id='LC214'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_swap</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC215'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC216'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">y</span><span class="p">(</span><span class="mi">20</span><span class="p">,</span> <span class="mi">3</span><span class="p">);</span></div><div class='line' id='LC217'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">x</span><span class="p">.</span><span class="n">swap</span><span class="p">(</span><span class="n">y</span><span class="p">);}</span></div><div class='line' id='LC218'><br/></div><div class='line' id='LC219'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -------------</span></div><div class='line' id='LC220'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_iterator</span></div><div class='line' id='LC221'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -------------</span></div><div class='line' id='LC222'><br/></div><div class='line' id='LC223'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_iterator</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC224'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC225'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">iterator</span>  <span class="n">b</span> <span class="o">=</span> <span class="n">x</span><span class="p">.</span><span class="n">begin</span><span class="p">();</span></div><div class='line' id='LC226'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">b</span> <span class="o">==</span> <span class="n">x</span><span class="p">.</span><span class="n">begin</span><span class="p">());</span></div><div class='line' id='LC227'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">reference</span> <span class="n">v</span> <span class="o">=</span> <span class="o">*</span><span class="n">b</span><span class="p">;</span></div><div class='line' id='LC228'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">++</span><span class="n">b</span><span class="p">;</span></div><div class='line' id='LC229'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">b</span> <span class="o">+=</span> <span class="mi">2</span><span class="p">;</span></div><div class='line' id='LC230'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">--</span><span class="n">b</span><span class="p">;</span></div><div class='line' id='LC231'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">b</span> <span class="o">-=</span> <span class="mi">2</span><span class="p">;</span></div><div class='line' id='LC232'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">reference</span> <span class="n">w</span> <span class="o">=</span> <span class="o">*</span><span class="n">b</span><span class="p">;</span></div><div class='line' id='LC233'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">v</span> <span class="o">==</span> <span class="n">w</span><span class="p">);}</span></div><div class='line' id='LC234'><br/></div><div class='line' id='LC235'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -------------------</span></div><div class='line' id='LC236'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_const_iterator</span></div><div class='line' id='LC237'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -------------------</span></div><div class='line' id='LC238'><br/></div><div class='line' id='LC239'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_const_iterator</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC240'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC241'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">const_iterator</span>  <span class="n">b</span> <span class="o">=</span> <span class="n">x</span><span class="p">.</span><span class="n">begin</span><span class="p">();</span></div><div class='line' id='LC242'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">b</span> <span class="o">==</span> <span class="n">x</span><span class="p">.</span><span class="n">begin</span><span class="p">());</span></div><div class='line' id='LC243'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">const_reference</span> <span class="n">v</span> <span class="o">=</span> <span class="o">*</span><span class="n">b</span><span class="p">;</span></div><div class='line' id='LC244'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">++</span><span class="n">b</span><span class="p">;</span></div><div class='line' id='LC245'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">b</span> <span class="o">+=</span> <span class="mi">2</span><span class="p">;</span></div><div class='line' id='LC246'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">--</span><span class="n">b</span><span class="p">;</span></div><div class='line' id='LC247'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">b</span> <span class="o">-=</span> <span class="mi">2</span><span class="p">;</span></div><div class='line' id='LC248'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typename</span> <span class="n">C</span><span class="o">::</span><span class="n">const_reference</span> <span class="n">w</span> <span class="o">=</span> <span class="o">*</span><span class="n">b</span><span class="p">;</span></div><div class='line' id='LC249'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">v</span> <span class="o">==</span> <span class="n">w</span><span class="p">);}</span></div><div class='line' id='LC250'><br/></div><div class='line' id='LC251'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ---------------</span></div><div class='line' id='LC252'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// test_algorithms</span></div><div class='line' id='LC253'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// ---------------</span></div><div class='line' id='LC254'><br/></div><div class='line' id='LC255'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">test_algorithms</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC256'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">C</span> <span class="n">x</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC257'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">C</span> <span class="n">y</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC258'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span><span class="p">(</span><span class="n">std</span><span class="o">::</span><span class="n">count</span><span class="p">(</span><span class="n">y</span><span class="p">.</span><span class="n">begin</span><span class="p">(),</span> <span class="n">y</span><span class="p">.</span><span class="n">end</span><span class="p">(),</span> <span class="mi">3</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC259'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">std</span><span class="o">::</span><span class="n">copy</span><span class="p">(</span><span class="n">y</span><span class="p">.</span><span class="n">begin</span><span class="p">(),</span> <span class="n">y</span><span class="p">.</span><span class="n">end</span><span class="p">(),</span> <span class="n">x</span><span class="p">.</span><span class="n">begin</span><span class="p">());</span></div><div class='line' id='LC260'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">std</span><span class="o">::</span><span class="n">fill</span><span class="p">(</span><span class="n">x</span><span class="p">.</span><span class="n">begin</span><span class="p">(),</span> <span class="n">x</span><span class="p">.</span><span class="n">end</span><span class="p">(),</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC261'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">std</span><span class="o">::</span><span class="n">reverse</span><span class="p">(</span><span class="n">x</span><span class="p">.</span><span class="n">begin</span><span class="p">(),</span> <span class="n">x</span><span class="p">.</span><span class="n">end</span><span class="p">());}</span></div><div class='line' id='LC262'><br/></div><div class='line' id='LC263'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -----</span></div><div class='line' id='LC264'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// suite</span></div><div class='line' id='LC265'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// -----</span></div><div class='line' id='LC266'><br/></div><div class='line' id='LC267'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST_SUITE</span><span class="p">(</span><span class="n">TestDeque</span><span class="p">);</span></div><div class='line' id='LC268'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_constructor</span><span class="p">);</span></div><div class='line' id='LC269'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_equality</span><span class="p">);</span></div><div class='line' id='LC270'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_comparison</span><span class="p">);</span></div><div class='line' id='LC271'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_assignment</span><span class="p">);</span></div><div class='line' id='LC272'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_subscript</span><span class="p">);</span></div><div class='line' id='LC273'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_at</span><span class="p">);</span></div><div class='line' id='LC274'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_back</span><span class="p">);</span></div><div class='line' id='LC275'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_begin</span><span class="p">);</span></div><div class='line' id='LC276'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_clear</span><span class="p">);</span></div><div class='line' id='LC277'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_empty</span><span class="p">);</span></div><div class='line' id='LC278'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_end</span><span class="p">);</span></div><div class='line' id='LC279'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_erase</span><span class="p">);</span></div><div class='line' id='LC280'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_front</span><span class="p">);</span></div><div class='line' id='LC281'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_insert</span><span class="p">);</span></div><div class='line' id='LC282'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_pop_back</span><span class="p">);</span></div><div class='line' id='LC283'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_push_back</span><span class="p">);</span></div><div class='line' id='LC284'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_resize</span><span class="p">);</span></div><div class='line' id='LC285'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_size</span><span class="p">);</span></div><div class='line' id='LC286'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_swap</span><span class="p">);</span></div><div class='line' id='LC287'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_iterator</span><span class="p">);</span></div><div class='line' id='LC288'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_const_iterator</span><span class="p">);</span></div><div class='line' id='LC289'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST</span><span class="p">(</span><span class="n">test_algorithms</span><span class="p">);</span></div><div class='line' id='LC290'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPPUNIT_TEST_SUITE_END</span><span class="p">();};</span></div><div class='line' id='LC291'><br/></div><div class='line' id='LC292'><span class="c1">// ----</span></div><div class='line' id='LC293'><span class="c1">// main</span></div><div class='line' id='LC294'><span class="c1">// ----</span></div><div class='line' id='LC295'><br/></div><div class='line' id='LC296'><span class="kt">int</span> <span class="n">main</span> <span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC297'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">using</span> <span class="k">namespace</span> <span class="n">std</span><span class="p">;</span></div><div class='line' id='LC298'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ios_base</span><span class="o">::</span><span class="n">sync_with_stdio</span><span class="p">(</span><span class="kc">false</span><span class="p">);</span>  <span class="c1">// turn off synchronization with C I/O</span></div><div class='line' id='LC299'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">"TestDeque.c++"</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span></div><div class='line' id='LC300'><br/></div><div class='line' id='LC301'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CppUnit</span><span class="o">::</span><span class="n">TextTestRunner</span> <span class="n">tr</span><span class="p">;</span></div><div class='line' id='LC302'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">.</span><span class="n">addTest</span><span class="p">(</span><span class="n">TestDeque</span><span class="o">&lt;</span> <span class="n">std</span><span class="o">::</span><span class="n">deque</span><span class="o">&lt;</span><span class="kt">int</span><span class="o">&gt;</span>                       <span class="o">&gt;::</span><span class="n">suite</span><span class="p">());</span></div><div class='line' id='LC303'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">.</span><span class="n">addTest</span><span class="p">(</span><span class="n">TestDeque</span><span class="o">&lt;</span> <span class="n">std</span><span class="o">::</span><span class="n">deque</span><span class="o">&lt;</span><span class="kt">int</span><span class="p">,</span> <span class="n">std</span><span class="o">::</span><span class="n">allocator</span><span class="o">&lt;</span><span class="kt">int</span><span class="o">&gt;</span> <span class="o">&gt;</span> <span class="o">&gt;::</span><span class="n">suite</span><span class="p">());</span></div><div class='line' id='LC304'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">.</span><span class="n">addTest</span><span class="p">(</span><span class="n">TestDeque</span><span class="o">&lt;</span>      <span class="n">Deque</span><span class="o">&lt;</span><span class="kt">int</span><span class="o">&gt;</span>                       <span class="o">&gt;::</span><span class="n">suite</span><span class="p">());</span></div><div class='line' id='LC305'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">.</span><span class="n">addTest</span><span class="p">(</span><span class="n">TestDeque</span><span class="o">&lt;</span>      <span class="n">Deque</span><span class="o">&lt;</span><span class="kt">int</span><span class="p">,</span> <span class="n">std</span><span class="o">::</span><span class="n">allocator</span><span class="o">&lt;</span><span class="kt">int</span><span class="o">&gt;</span> <span class="o">&gt;</span> <span class="o">&gt;::</span><span class="n">suite</span><span class="p">());</span></div><div class='line' id='LC306'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">.</span><span class="n">run</span><span class="p">();</span></div><div class='line' id='LC307'><br/></div><div class='line' id='LC308'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">"Done."</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span></div><div class='line' id='LC309'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="mi">0</span><span class="p">;}</span></div><div class='line' id='LC310'><br/></div></pre></div>
            
          </td>
        </tr>
      </table>
    
  </div>


      </div>
    </div>

  


    </div>
  
      

      <div class="push"></div>
    </div>

    <div id="footer">
      <div class="site">
        <div class="info">
          <div class="links">
            <a href="http://github.com/blog"><b>Blog</b></a> |
            <a href="http://support.github.com">Support</a> |
            <a href="http://github.com/training">Training</a> |
            <a href="http://github.com/contact">Contact</a> |
            <a href="http://develop.github.com">API</a> |
            <a href="http://status.github.com">Status</a> |
            <a href="http://twitter.com/github">Twitter</a> |
            <a href="http://help.github.com">Help</a> |
            <a href="http://github.com/security">Security</a>
          </div>
          <div class="company">
            &copy;
            2010
            <span id="_rrt" title="0.05983s from fe1.rs.github.com">GitHub</span> Inc.
            All rights reserved. |
            <a href="/site/terms">Terms of Service</a> |
            <a href="/site/privacy">Privacy Policy</a>
          </div>
        </div>
        <div class="sponsor">
          <div>
            Powered by the <a href="http://www.rackspace.com ">Dedicated
            Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
            Computing</a> of Rackspace Hosting<span>&reg;</span>
          </div>
          <a href="http://www.rackspace.com">
            <img alt="Dedicated Server" src="http://assets3.github.com/images/modules/footer/rackspace_logo.png?994fb815236ea531ca768abfa201f2b2efc8aacf" />
          </a>
        </div>
      </div>
    </div>

    
    
      <!-- current locale:  -->
      <div class="locales">
        <div class="site">
          <ul class="choices">
            
              
                <li><span class="current">English</span></li>
              
            
              
                
                  <li><a rel="nofollow" href="?locale=ca">Català</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=cs">Čeština</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=de">Deutsch</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=es">Español</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=fr">Français</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=hr">Hrvatski</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=id">Indonesia</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=it">Italiano</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=ja">日本語</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=nl">Nederlands</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=no">Norsk</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=pl">Polski</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=pt-BR">Português (BR)</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=sr">Српски</a></li>
                
              
            
              
                
                  <li><a rel="nofollow" href="?locale=sv">Svenska</a></li>
                
              
            
          </ul>
        </div>
      </div>
    

    <script>window._auth_token = "f20d0be84e9dfdc578d296a3328c834cccaf3cc5"</script>
    

    <script type="text/javascript">
      _kmq.push(['trackClick', 'entice_banner_link', 'Entice banner clicked']);
      
    </script>
    
  </body>
</html>

