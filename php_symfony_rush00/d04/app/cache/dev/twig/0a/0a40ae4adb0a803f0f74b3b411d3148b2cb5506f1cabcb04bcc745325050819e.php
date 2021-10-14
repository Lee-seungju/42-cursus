<?php

use Twig\Environment;
use Twig\Error\LoaderError;
use Twig\Error\RuntimeError;
use Twig\Markup;
use Twig\Sandbox\SecurityError;
use Twig\Sandbox\SecurityNotAllowedTagError;
use Twig\Sandbox\SecurityNotAllowedFilterError;
use Twig\Sandbox\SecurityNotAllowedFunctionError;
use Twig\Source;
use Twig\Template;

/* GameBundle::WorldMap.html.twig */
class __TwigTemplate_9105c5c7ee1d38fd60c0d3dde33f688d730de142e5882970a9099bec213d71f3 extends \Twig\Template
{
    public function __construct(Environment $env)
    {
        parent::__construct($env);

        $this->parent = false;

        $this->blocks = [
        ];
    }

    protected function doDisplay(array $context, array $blocks = [])
    {
        $__internal_319393461309892924ff6e74d6d6e64287df64b63545b994e100d4ab223aed02 = $this->env->getExtension("Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension");
        $__internal_319393461309892924ff6e74d6d6e64287df64b63545b994e100d4ab223aed02->enter($__internal_319393461309892924ff6e74d6d6e64287df64b63545b994e100d4ab223aed02_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "GameBundle::WorldMap.html.twig"));

        // line 1
        echo "<!DOCTYPE html>
<html lang=\"en\">
<head>
    <meta charset=\"UTF-8\">
    <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">
    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">
    <title>World Map</title>
    <link rel=\"stylesheet\" type=\"text/css\" href=\"css/worldmap.css\"/>
</head>
<body>
    <!--total-->
    <div id=\"page-wrapper\">
        <!--header-->
        <header id=\"main-header\">
            <hgroup>
                <h1>World Map</h1>
                <h2>-Capture your moviemon</h2>
            </hgroup>
        </header>
        <!--content-->
        <div id=\"content\">
            <!---World Map-->
            <div id=\"table-div\" class=\"pull-left\">
                <table style=\"text-align: center;\">
                    <tr>
                        <td>
                        ";
        // line 27
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 0) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 0))) {
            // line 28
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 30
        echo "                        </td>
                        <td>
                        ";
        // line 32
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 0) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 1))) {
            // line 33
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 35
        echo "                        </td>
                        <td>
                        ";
        // line 37
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 0) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 2))) {
            // line 38
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 40
        echo "                        </td>
                        <td>
                        ";
        // line 42
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 0) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 3))) {
            // line 43
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 45
        echo "                        </td>
                        <td>
                        ";
        // line 47
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 0) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 4))) {
            // line 48
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 50
        echo "                        </td>
                    </tr>
                    <tr>
                        <td>
                        ";
        // line 54
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 1) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 0))) {
            // line 55
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 57
        echo "                        </td>
                        <td>
                        ";
        // line 59
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 1) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 1))) {
            // line 60
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 62
        echo "                        </td>
                        <td>
                        ";
        // line 64
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 1) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 2))) {
            // line 65
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 67
        echo "                        </td>
                        <td>
                        ";
        // line 69
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 1) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 3))) {
            // line 70
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 72
        echo "                        </td>
                        <td>
                        ";
        // line 74
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 1) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 4))) {
            // line 75
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 77
        echo "                        </td>
                    </tr>
                    <tr>
                        <td>
                        ";
        // line 81
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 2) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 0))) {
            // line 82
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 84
        echo "                        </td>
                        <td>
                        ";
        // line 86
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 2) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 1))) {
            // line 87
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 89
        echo "                        </td>
                        <td>
                        ";
        // line 91
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 2) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 2))) {
            // line 92
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 94
        echo "                        </td>
                        <td>
                        ";
        // line 96
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 2) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 3))) {
            // line 97
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 99
        echo "                        </td>
                        <td>
                        ";
        // line 101
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 2) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 4))) {
            // line 102
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 104
        echo "                        </td>
                    </tr>
                    <tr>
                        <td>
                        ";
        // line 108
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 3) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 0))) {
            // line 109
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 111
        echo "                        </td>
                        <td>
                        ";
        // line 113
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 3) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 1))) {
            // line 114
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 116
        echo "                        </td>
                        <td>
                        ";
        // line 118
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 3) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 2))) {
            // line 119
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 121
        echo "                        </td>
                        <td>
                        ";
        // line 123
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 3) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 3))) {
            // line 124
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 126
        echo "                        </td>
                        <td>
                        ";
        // line 128
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 3) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 4))) {
            // line 129
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 131
        echo "                        </td>
                    </tr>
                    <tr>
                        <td>
                        ";
        // line 135
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 4) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 0))) {
            // line 136
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 138
        echo "                        </td>
                        <td>
                        ";
        // line 140
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 4) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 1))) {
            // line 141
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 143
        echo "                        </td>
                        <td>
                        ";
        // line 145
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 4) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 2))) {
            // line 146
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 148
        echo "                        </td>
                        <td>
                        ";
        // line 150
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 4) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 3))) {
            // line 151
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 153
        echo "                        </td>
                        <td>
                        ";
        // line 155
        if ((($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 0, [], "array") == 4) && ($this->getAttribute(($context["location"] ?? $this->getContext($context, "location")), 1, [], "array") == 4))) {
            // line 156
            echo "                        <img src=\"img/player.png\">
                        ";
        }
        // line 158
        echo "                        </td>
                    </tr>
                </table>
                <!--Capture-->
                <div id=\"capture-div\" class=\"pull-left\">
                    ";
        // line 163
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable(range(0, 9));
        foreach ($context['_seq'] as $context["_key"] => $context["i"]) {
            // line 164
            echo "                    <li class=\"pull-left\" style=\"background-image: linear-gradient(rgba(0, 0, 0, ";
            echo twig_escape_filter($this->env, $this->getAttribute(($context["capture"] ?? $this->getContext($context, "capture")), $context["i"], [], "array"), "html", null, true);
            echo "), rgba(0, 0, 0, ";
            echo twig_escape_filter($this->env, $this->getAttribute(($context["capture"] ?? $this->getContext($context, "capture")), $context["i"], [], "array"), "html", null, true);
            echo ")), url(";
            echo twig_escape_filter($this->env, $this->getAttribute(($context["post"] ?? $this->getContext($context, "post")), $context["i"], [], "array"), "html", null, true);
            echo ");\">
                    </li>
                    ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['i'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 167
        echo "                </div>
            </div>
            <!--button-->
            <div id=\"button-div\" class=\"pull-left\">
                <div id=\"direction-box\">
                    <a href=\"http://localhost:8000/worldmap/left\"><div class=\"circle\" id=\"circle-left\">←</div></a>
                    <a href=\"http://localhost:8000/worldmap/up\"><div class=\"circle\" id=\"circle-up\">↑</div></a>
                    <a href=\"http://localhost:8000/worldmap/right\"><div class=\"circle\" id=\"circle-right\">→</div></a>
                    <a href=\"http://localhost:8000/worldmap/down\"><div class=\"circle\" id=\"circle-down\">↓</div></a>
                </div>
                <div id=\"form-div\">
                    ";
        // line 178
        echo         $this->env->getExtension('Symfony\Bridge\Twig\Extension\FormExtension')->renderer->renderBlock(($context["form"] ?? $this->getContext($context, "form")), 'form_start');
        echo "
                    ";
        // line 179
        echo         $this->env->getExtension('Symfony\Bridge\Twig\Extension\FormExtension')->renderer->renderBlock(($context["form"] ?? $this->getContext($context, "form")), 'form_end');
        echo "
                </div>
            </div>
        </div>
        <!--footer-->
        <footer id=\"main-footer\">
            <p class=\"footer-margin\">php | piscine | rush00 | project | by. slee2, sujo</p>
            <p class=\"footer-margin\">Born to code. 42Seoul...</p>
            <div class=\"git-address\">
                <img class=\"pull-left\" src=\"img/github.png\" alt=\"\">
                <p class=\"pull-left\"><span>slee2</span> : https://github.com/Lee-seungju</p>
            </div>
            <div class=\"git-address\">
                <img class=\"pull-left\" src=\"img/github.png\" alt=\"\">
                <p class=\"pull-left\"><span>sujo</span> : https://github.com/josuhee</p>
            </div>
        </footer>
    </div>
</body>
</html>
";
        
        $__internal_319393461309892924ff6e74d6d6e64287df64b63545b994e100d4ab223aed02->leave($__internal_319393461309892924ff6e74d6d6e64287df64b63545b994e100d4ab223aed02_prof);

    }

    public function getTemplateName()
    {
        return "GameBundle::WorldMap.html.twig";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  357 => 179,  353 => 178,  340 => 167,  326 => 164,  322 => 163,  315 => 158,  311 => 156,  309 => 155,  305 => 153,  301 => 151,  299 => 150,  295 => 148,  291 => 146,  289 => 145,  285 => 143,  281 => 141,  279 => 140,  275 => 138,  271 => 136,  269 => 135,  263 => 131,  259 => 129,  257 => 128,  253 => 126,  249 => 124,  247 => 123,  243 => 121,  239 => 119,  237 => 118,  233 => 116,  229 => 114,  227 => 113,  223 => 111,  219 => 109,  217 => 108,  211 => 104,  207 => 102,  205 => 101,  201 => 99,  197 => 97,  195 => 96,  191 => 94,  187 => 92,  185 => 91,  181 => 89,  177 => 87,  175 => 86,  171 => 84,  167 => 82,  165 => 81,  159 => 77,  155 => 75,  153 => 74,  149 => 72,  145 => 70,  143 => 69,  139 => 67,  135 => 65,  133 => 64,  129 => 62,  125 => 60,  123 => 59,  119 => 57,  115 => 55,  113 => 54,  107 => 50,  103 => 48,  101 => 47,  97 => 45,  93 => 43,  91 => 42,  87 => 40,  83 => 38,  81 => 37,  77 => 35,  73 => 33,  71 => 32,  67 => 30,  63 => 28,  61 => 27,  33 => 1,);
    }

    /** @deprecated since 1.27 (to be removed in 2.0). Use getSourceContext() instead */
    public function getSource()
    {
        @trigger_error('The '.__METHOD__.' method is deprecated since version 1.27 and will be removed in 2.0. Use getSourceContext() instead.', E_USER_DEPRECATED);

        return $this->getSourceContext()->getCode();
    }

    public function getSourceContext()
    {
        return new Source("<!DOCTYPE html>
<html lang=\"en\">
<head>
    <meta charset=\"UTF-8\">
    <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">
    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">
    <title>World Map</title>
    <link rel=\"stylesheet\" type=\"text/css\" href=\"css/worldmap.css\"/>
</head>
<body>
    <!--total-->
    <div id=\"page-wrapper\">
        <!--header-->
        <header id=\"main-header\">
            <hgroup>
                <h1>World Map</h1>
                <h2>-Capture your moviemon</h2>
            </hgroup>
        </header>
        <!--content-->
        <div id=\"content\">
            <!---World Map-->
            <div id=\"table-div\" class=\"pull-left\">
                <table style=\"text-align: center;\">
                    <tr>
                        <td>
                        {% if location[0] == 0 and location[1] == 0 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 0 and location[1] == 1 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 0 and location[1] == 2 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 0 and location[1] == 3 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 0 and location[1] == 4 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                    </tr>
                    <tr>
                        <td>
                        {% if location[0] == 1 and location[1] == 0 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 1 and location[1] == 1 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 1 and location[1] == 2 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 1 and location[1] == 3 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 1 and location[1] == 4 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                    </tr>
                    <tr>
                        <td>
                        {% if location[0] == 2 and location[1] == 0 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 2 and location[1] == 1 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 2 and location[1] == 2 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 2 and location[1] == 3 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 2 and location[1] == 4 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                    </tr>
                    <tr>
                        <td>
                        {% if location[0] == 3 and location[1] == 0 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 3 and location[1] == 1 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 3 and location[1] == 2 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 3 and location[1] == 3 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 3 and location[1] == 4 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                    </tr>
                    <tr>
                        <td>
                        {% if location[0] == 4 and location[1] == 0 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 4 and location[1] == 1 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 4 and location[1] == 2 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 4 and location[1] == 3 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                        <td>
                        {% if location[0] == 4 and location[1] == 4 %}
                        <img src=\"img/player.png\">
                        {% endif %}
                        </td>
                    </tr>
                </table>
                <!--Capture-->
                <div id=\"capture-div\" class=\"pull-left\">
                    {% for i in 0..9 %}
                    <li class=\"pull-left\" style=\"background-image: linear-gradient(rgba(0, 0, 0, {{ capture[i] }}), rgba(0, 0, 0, {{ capture[i] }})), url({{ post[i] }});\">
                    </li>
                    {% endfor %}
                </div>
            </div>
            <!--button-->
            <div id=\"button-div\" class=\"pull-left\">
                <div id=\"direction-box\">
                    <a href=\"http://localhost:8000/worldmap/left\"><div class=\"circle\" id=\"circle-left\">←</div></a>
                    <a href=\"http://localhost:8000/worldmap/up\"><div class=\"circle\" id=\"circle-up\">↑</div></a>
                    <a href=\"http://localhost:8000/worldmap/right\"><div class=\"circle\" id=\"circle-right\">→</div></a>
                    <a href=\"http://localhost:8000/worldmap/down\"><div class=\"circle\" id=\"circle-down\">↓</div></a>
                </div>
                <div id=\"form-div\">
                    {{ form_start(form) }}
                    {{ form_end(form) }}
                </div>
            </div>
        </div>
        <!--footer-->
        <footer id=\"main-footer\">
            <p class=\"footer-margin\">php | piscine | rush00 | project | by. slee2, sujo</p>
            <p class=\"footer-margin\">Born to code. 42Seoul...</p>
            <div class=\"git-address\">
                <img class=\"pull-left\" src=\"img/github.png\" alt=\"\">
                <p class=\"pull-left\"><span>slee2</span> : https://github.com/Lee-seungju</p>
            </div>
            <div class=\"git-address\">
                <img class=\"pull-left\" src=\"img/github.png\" alt=\"\">
                <p class=\"pull-left\"><span>sujo</span> : https://github.com/josuhee</p>
            </div>
        </footer>
    </div>
</body>
</html>
", "GameBundle::WorldMap.html.twig", "/Users/seungjulee/cadet/42-cursus/php_symfony_rush00/d04/src/GameBundle/Resources/views/WorldMap.html.twig");
    }
}
